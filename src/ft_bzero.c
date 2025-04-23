/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 15:58:06 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/23 16:39:38 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}
/*
int main(void)
{

	int	arr[5] = {1, 2, 3, 4, 5};
	int	i = 0;
	printf("Teste 1 (array de inteiros - ANTES): ");
	while (i < 5)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
	ft_bzero(arr, sizeof(arr));
	i = 0;
	printf("Teste 1 (array de inteiros - DEPOIS): ");
	while (i < 5)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");


	printf("\n");
	char	str[10] = "MaxPayne";
	printf("Teste 2 (string - ANTES): \"%s\"\n", str);
	ft_bzero(str, sizeof(str));
	printf("Teste 2 (string - DEPOIS): \"%s\"\n", str);


	printf("\n");
	int	arr2[5] = {1, 2, 3, 4, 5};
	printf("Teste 3 (tamanho zero - ANTES): ");
	i = 0;
	while (i < 5) 
	{
		printf("%d ", arr2[i]);
		i++;
	}
	printf("\n");

	ft_bzero(arr2, 0);
	printf("Teste 3 (tamanho zero - DEPOIS): ");
	i = 0;
	while (i < 5) 
	{
		printf("%d ", arr2[i]);
		i++;
	}
	printf("\n");

	return (0);
}
*/
