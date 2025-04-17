/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 17:09:52 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/17 17:59:51 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

static int	ft_total_words(char const *array, char c)
{
	int	i;
	int	word_count;

	if (!array)
	{
		return (0);
	}
	i = 0;
	word_count = 0;
	while (array[i])
	{
		while (array[i] == c)
			i++;
		if (array[i])
			word_count = word_count + 1;
		while (array[i] != c && array[i])
			i++;
	}
	return (word_count);
}

static int	ft_length_word(char const *array, char c)
{
	int	i;

	i = 0;
	while (array[i] && !(array[i] == c))
		i++;
	return (i);
}

static char	*ft_create_array_of_word(char const *s, char c)
{
	int		length_word;
	int		i;
	char	*word;

	i = 0;
	length_word = ft_length_word(s, c);
	word = (char *) malloc (sizeof(char) * (length_word + 1));
	if (!word)
		return (NULL);
	while (i < length_word)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	*ft_free_memory_if_end(char **dest, int i)
{
	while (i-- > 0)
		free(dest[i]);
	free(dest);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	dest = (char **) malloc (sizeof(char *) * (ft_total_words(s, c) + 1));
	if (!dest)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			dest[i] = ft_create_array_of_word(s, c);
			if (!dest[i])
				return (ft_free_memory_if_end(dest, i));
			i++;
			s = s + ft_length_word(s, c);
		}
	}
	dest[i] = NULL;
	return (dest);
}
/*
int	main(void)
{
	char const	*s;
	char		c;
	char		**octets;
	int			n;
	int			i;

	s = "144.107.56.234";
	c = '.';
	octets = ft_split(s, c);
	n = ft_total_words(s, c);
	i = 0;
	while (i < n)
	{
		printf("%s\n", octets[i]);
		i++;
	}
	return (0);
}
*/
