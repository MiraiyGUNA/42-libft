/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:45:40 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/23 16:48:04 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	c = (unsigned char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if (c == '\0')
	{
		return ((char *)&s[i]);
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	str[] = "The Tragedy of Man";
	char		c;
	char		*result;

	c = 'y';
	result = ft_strchr(str, c);
	if (result)
	{
		printf("Caractere '%c' encontrado na posição: %ld\n", c, result - str);
		printf("Parte da string a partir do caractere encontrado: %s\n",
			result);
	}
	else
	{
		printf("Caractere '%c' não encontrado na string.\n", c);
	}
	c = '\0';
	result = ft_strchr(str, c);
	if (result)
	{
		printf("Terminador nulo encontrado no final da string.\n");
	}
	return (0);
}
*/
