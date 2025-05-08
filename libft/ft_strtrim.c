/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 14:53:33 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/11 15:46:17 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i > 0 && ft_strchr(set, s1[i - 1]))
		i--;
	return (ft_substr(s1, 0, i));
}
/*
char	*ft_strchr(const char *str, int c)
{
	int	i;

	c = (unsigned char)c;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			return ((char *)&str[i]);
		}
		i++;
	}
	if (c == '\0')
	{
		return ((char *)&str[i]);
	}
	return (NULL);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	str_size;

	if (!s)
		return (NULL);
	str_size = ft_strlen(s);
	if (str_size < start)
	{
		dest = (char *)malloc(sizeof(char) * 1);
		if (!dest)
			return (NULL);
		dest[0] = '\0';
		return (dest);
	}
	if (len > str_size - start)
		len = str_size - start;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	ft_memcpy(dest, s + start, len);
	dest[len] = '\0';
	return (dest);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*pdest;
	const char	*psrc;

	pdest = dest;
	psrc = src;
	if (pdest == psrc)
	{
		return (pdest);
	}
	if (!dest && !src && n > 0)
	{
		return (NULL);
	}
	i = 0;
	while (i < n)
	{
		pdest[i] = psrc[i];
		i++;
	}
	return (pdest);
}

int	main(void)
{
	const char	s1[] = "*************Papa*Pitufo****EPitufina*****SonPitufos";
	const char	set[] = "*";
	char		*trimmed;

	trimmed = ft_strtrim(s1, set);
	if (trimmed)
	{
		printf("String original: %s\n", s1);
		printf("Set de caracteres: %s\n", set);
		printf("String aparada: %s\n", trimmed);
		free(trimmed);
	}
	else
	{
		printf("Erro ao aparar a string (resultou em NULL).\n");
	}
	return (0);
}
*/
