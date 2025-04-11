/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 11:28:14 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/10 11:44:01 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

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
int main() {
    // Teste 1: calloc com num = 5 e size = sizeof(int)
    void *ptr1 = ft_calloc(5, sizeof(int));
	size_t	i = 0;
    printf("Teste 1 (inteiros): ");
    if (ptr1 != NULL) {
        while (i < 5) {
            printf("%d ", *((int *)ptr1 + i));
			 i++;
        }
        printf("\n");
        free(ptr1);
    } else {
        printf("Alocação falhou.\n");
    }

    // Teste 2: calloc com num = 10 e size = sizeof(char)
    void *ptr2 = ft_calloc(10, sizeof(char));
    printf("Teste 2 (caracteres): ");
	i = 0;
    if (ptr2 != NULL) {
        while (i < 10) {
            printf("%c", *((char *)ptr2 + i));
			 i++;
        }
        printf("\n");
        free(ptr2);
    } else {
        printf("Alocação falhou.\n");
    }

    // Teste 3: calloc com num = 0 e size = 10
    void *ptr3 = ft_calloc(0, 10);
    printf("Teste 3 (num = 0): %p\n", ptr3);
    if (ptr3 != NULL) {
        free(ptr3);
    }

    // Teste 4: calloc com num = 5 e size = 0
    void *ptr4 = ft_calloc(5, 0);
    printf("Teste 4 (size = 0): %p\n", ptr4);
    if (ptr4 != NULL) {
        free(ptr4);
    }

    // Teste 5: calloc com num e size que causam overflow.  Verifica se malloc retorna NULL
    void *ptr5 = ft_calloc(SIZE_MAX, sizeof(int)); // Provoca um overflow intencional
    if (ptr5 == NULL) {
        printf("Teste 5 (overflow): Alocação falhou como esperado.\n");
    } else {
        printf("Teste 5 (overflow): Alocação inesperada!\n");
        free(ptr5); // Limpa a memória se a alocação for inesperada.
    }

    return 0;
}
*/