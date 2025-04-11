/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 15:41:46 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/11 15:28:25 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	c = (unsigned char)c;
	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == c)
		{
			return ((char *)str + i);
		}
		i--;
	}
	return (NULL);
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
int	main(void)
{
	const char	str[] = "Dead Dead Demon's Dededede Destruction"; 
	char		*result;

	char c = 'D';

	result = ft_strrchr(str, c);
	if (result)
	{
		printf("Última ocorrência do caractere '%c': %s\n", c, result);
	}
	else
	{
		printf("Caractere '%c' não encontrado na string.\n", c);
	}

	c = '\0';
	result = ft_strrchr(str, c);
	if (result)
	{
		printf("Terminador nulo encontrado no final da string.\n");
	}
	return (0);
}
*/
