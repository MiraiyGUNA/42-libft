/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 11:54:46 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/11 15:51:11 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

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
/*
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
	const char	s[] = "The World Is Mine";
	char		*substr;

	unsigned int start = 4; 
	size_t len = 17;        

	substr = ft_substr(s, start, len);
	if (substr)
	{
		printf("String original: %s\n", s);
		printf("Substring extraída: %s\n", substr);
		free(substr);
	}
	else
	{
		printf("Erro ao criar substring (resultou em NULL).\n");
	}
	return (0);
}
*/
