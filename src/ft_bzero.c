/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 15:58:06 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/09 15:58:19 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_bzero(void *ptr, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = ptr;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}
/*
int main(void) {
    // Teste 1: bzero com um array de inteiros
	int arr[5] = {1, 2, 3, 4, 5};
	int	i = 0;
    ft_bzero(arr, sizeof(arr));
    printf("Teste 1 (array de inteiros): ");
    while (i < 5)
	{
        printf("%d ", arr[i]);
		i++;
    }
    printf("\n");

    // Teste 2: bzero com uma string
    char str[10] = "MaxPayne";
    ft_bzero(str, sizeof(str));
    printf("Teste 2 (string): \"%s\"\n", str);

    // Teste 3: bzero com um ponteiro nulo
    void *ptr = NULL;
    ft_bzero(ptr, 10); // Deve funcionar sem crashar.  Não há output esperado.

    // Teste 4: bzero com tamanho zero
    int arr2[5] = {1, 2, 3, 4, 5};
    ft_bzero(arr2, 0);
    printf("Teste 4 (tamanho zero): ");
	i = 0;
    while (i < 5) {
        printf("%d ", arr2[i]);
		i++;
    }
    printf("\n");

    return (0);
}
*/