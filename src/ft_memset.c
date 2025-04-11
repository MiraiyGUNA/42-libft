/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 18:15:19 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/08 14:23:16 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h> 

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
/*
int main(void) {
    // Teste 1: Alocando memória e preenchendo com um valor
    char *ptr1 = (char *)malloc(10);
    if (ptr1 == NULL) {
        printf("Erro ao alocar memória no teste 1.\n");
        return 1;
    }
    ft_memset(ptr1, 'A', 10);
    for (int i = 0; i < 10; i++) {
        if (ptr1[i] != 'A') {
            printf("Teste 1: Falhou na posição %d\n", i);
            free(ptr1);
            return 1;
        }
    }
    printf("Teste 1: Passado\n");
    free(ptr1);

    // Teste 2: Preenchendo um array existente
    char arr[5];
    ft_memset(arr, 'B', 5);
    for (int i = 0; i < 5; i++) {
        if (arr[i] != 'B') {
            printf("Teste 2: Falhou na posição %d\n", i);
            return 1;
        }
    }
    printf("Teste 2: Passado\n");

    // Teste 3: Preenchendo com valor zero
    char *ptr2 = (char *)malloc(5);
    if (ptr2 == NULL) {
        printf("Erro ao alocar memória no teste 3.\n");
        return 1;
    }
    ft_memset(ptr2, 0, 5);
    for (int i = 0; i < 5; i++) {
        if (ptr2[i] != 0) {
            printf("Teste 3: Falhou na posição %d\n", i);
            free(ptr2);
            return 1;
        }
    }
    printf("Teste 3: Passado\n");
    free(ptr2);

    // Teste 4: Preenchendo com um valor diferente de zero e tamanho zero.
    char *ptr4 = (char *)malloc(5);
    if (ptr4 == NULL) {
        printf("Erro ao alocar memória no teste 4.\n");
        return 1;
    }
    ft_memset(ptr4, 'C', 0);
    for (int i = 0; i < 5; i++) {
        if (ptr4[i] != '\0') { // Verifica se a memória foi alterada.
            printf("Teste 4: Falhou na posição %d\n", i);
            free(ptr4);
            return 1;
        }
    }
    printf("Teste 4: Passado\n");
    free(ptr4);

    return 0;
}
*/