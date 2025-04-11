/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 11:28:14 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/11 14:31:58 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>

void	*ft_calloc(size_t num, size_t size)
{
	size_t	result;
	void	*p;

	result = num * size;
	p = malloc(result);
	if (!p)
	{
		return (NULL);
	}
	ft_memset(p, 0, result);
	return (p);
}
/*
void	*ft_memset(void *ptr, int value, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = ptr;
	i = 0;
	while (i < n)
	{
		str[i] = value;
		i++;
	}
	return (str);
}

int	main(void)
{
	void	*ptr1;
	size_t	i;
	void	*ptr2;
	void	*ptr3;
	void	*ptr4;

	// Teste 1: calloc com num = 5 e size = sizeof(int)
	ptr1 = ft_calloc(5, sizeof(int));
	i = 0;
	printf("Teste 1 (inteiros): ");
	if (ptr1 != NULL)
	{
		while (i < 5)
		{
			printf("%d ", *((int *)ptr1 + i));
			i++;
		}
		printf("\n");
		free(ptr1);
	}
	else
	{
		printf("Alocação falhou.\n");
	}
	// Teste 2: calloc com num = 10 e size = sizeof(char)
	ptr2 = ft_calloc(10, sizeof(char));
	printf("Teste 2 (caracteres): ");
	i = 0;
	if (ptr2 != NULL)
	{
		while (i < 10)
		{
			printf("%c", *((char *)ptr2 + i));
			i++;
		}
		printf("\n");
		free(ptr2);
	}
	else
	{
		printf("Alocação falhou.\n");
	}
	// Teste 3: calloc com num = 0 e size = 10
	ptr3 = ft_calloc(0, 10);
	printf("Teste 3 (num = 0): %p\n", ptr3);
	if (ptr3 != NULL)
	{
		free(ptr3);
	}
	// Teste 4: calloc com num = 5 e size = 0
	ptr4 = ft_calloc(5, 0);
	printf("Teste 4 (size = 0): %p\n", ptr4);
	if (ptr4 != NULL)
	{
		free(ptr4);
	}
	return (0);
}
*/
