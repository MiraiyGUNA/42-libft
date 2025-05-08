/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 15:39:01 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/25 13:42:45 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

static int	ft_total_strings(char const *s, char c)
{
	int	i;
	int	count;

	if (!s)
		return (0);
	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && (s[i] == c))
			i++;
		if (s[i])
			count++;
		while (s[i] && !(s[i] == c))
			i++;
	}
	return (count);
}

static int	ft_word_length(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && !(s[i] == c))
		i++;
	return (i);
}

static char	*ft_word(char const *s, char c)
{
	int		len_word;
	int		i;
	char	*word;

	i = 0;
	len_word = ft_word_length(s, c);
	word = (char *)malloc(sizeof(char) * (len_word + 1));
	if (!word)
		return (NULL);
	while (i < len_word)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	*ft_free_memory(char **strings, int i)
{
	while (i-- > 0)
		free(strings[i]);
	free(strings);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	strings = (char **)malloc(sizeof(char *) * (ft_total_strings(s, c) + 1));
	if (!strings)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			strings[i] = ft_word(s, c);
			if (strings[i++] == NULL)
				return (ft_free_memory(strings, i));
			s = s + ft_word_length(s, c);
		}
		if (*s)
			s++;
	}
	strings[i] = NULL;
	return (strings);
}
/*
int	main(void)
{
	char	**words;
	int		i;
	char	*str;
	char	delim;

	i = 0;
	str = "***Eu***GostoMuitoDeGelado***";
	delim = '*';

	words = ft_split(str, delim);
	if (!words)
	{
		printf("Erro na alocação de memória.\n");
		return (1);
	}
	printf("String original:\n\"%s\"\n\n", str);
	printf("Palavras após o split (delimitador '%c'):\n", delim);
	while (words[i])
	{
		printf("Word[%d]: \"%s\"\n", i, words[i]);
		free(words[i]);
		i++;
	}
	free(words);
	return (0);
}
*/
