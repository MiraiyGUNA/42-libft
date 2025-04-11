/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 11:19:13 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/11 15:24:40 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	little_length;
	size_t	j;

	little_length = ft_strlen(little);
	if (little_length == 0 || big == little)
		return ((char *)big);
	if (n == 0)
		return (NULL);
	i = 0;
	while (big[i] && i < n)
	{
		j = 0;
		while (big[i + j] == little[j] && little[j] && (i + j) < n)
			j++;
		if (j == little_length)
			return ((char *)big + i);
		i++;
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
	const char	big[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.";
	const char	little[] = "sit";
	char		*result;
	char		empty[] = "";

	size_t n = 20;

	result = ft_strnstr(big, little, n);
	if (result)
	{
		printf("Substring '%s' encontrada em: %s\n", little, result);
	}
	else
	{
		printf("Substring '%s' não encontrada nos primeiros %zu caracteres.\n",
			little, n);
	}

	result = ft_strnstr(big, empty, n);
	if (result)
	{
		printf("\nSubstring vazia retorna: %s\n", result);
	}
	return (0);
}
*/
