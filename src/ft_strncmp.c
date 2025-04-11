/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:51:49 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/11 18:47:24 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>

int	ft_strncmp(char *str1, char *str2, size_t n)
{
	while ((*str1 || *str2) && n > 0)
	{
		if (*str1 != *str2)
		{
			return ((unsigned char)*str1 - (unsigned char)*str2);
		}
		str1++;
		str2++;
		n--;
	}
	return (0);
}
/*
int	main(void)
{
	char	str1[] = "42Porto";
	char	str2[] = "42Lisboa";
	size_t	n;
	int		result;

	n = 2;
	result = ft_strncmp(str1, str2, n);
	printf("String 1: %s\n", str1);
	printf("String 2: %s\n", str2);
	printf("Resultado de ft_strncmp: %d\n", result);
	if (result < 0)
		printf("String 1 é menor que String 2 nos primeiros %zu caracteres.\n",
			n);
	else if (result > 0)
		printf("String 1 é maior que String 2 nos primeiros %zu caracteres.\n",
			n);
	else
		printf("As strings são iguais nos primeiros %zu caracteres.\n", n);
	return (0);
}
*/
