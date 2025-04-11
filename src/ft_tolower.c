/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 18:08:34 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/09 12:41:27 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	else
	{
		return (c);
	}
}
/*
int main(void)
{
    // Teste 1: Letra maiúscula 'A'
    int result1 = ft_tolower('A');
    if (result1 == 'a') {
        printf("Teste 1 ('A'): Passado\n");
    } else {
        printf("Teste 1 ('A'): Falhou, esperado: a, obtido: %d\n", result1);
    }

    // Teste 2: Letra maiúscula 'Z'
    int result2 = ft_tolower('Z');
    if (result2 == 'z') {
        printf("Teste 2 ('Z'): Passado\n");
    } else {
        printf("Teste 2 ('Z'): Falhou, esperado: z, obtido: %d\n", result2);
    }

    // Teste 3: Letra minúscula 'a'
    int result3 = ft_tolower('a');
    if (result3 == 'a') {
        printf("Teste 3 ('a'): Passado\n");
    } else {
        printf("Teste 3 ('a'): Falhou, esperado: a, obtido: %d\n", result3);
    }

    // Teste 4: Caractere numérico '5'
    int result4 = ft_tolower('5');
    if (result4 == '5') {
        printf("Teste 4 ('5'): Passado\n");
    } else {
        printf("Teste 4 ('5'): Falhou, esperado: 5, obtido: %d\n", result4);
    }

    // Teste 5: Caractere especial '$'
    int result5 = ft_tolower('$');
    if (result5 == '$') {
        printf("Teste 5 ('$'): Passado\n");
    } else {
        printf("Teste 5 ('$'): Falhou, esperado: $, obtido: %d\n", result5);
    }

    return 0;
}
*/