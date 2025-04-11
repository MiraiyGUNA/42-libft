/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 17:27:39 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/07 17:30:27 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	else
	{
		return (c);
	}
}
/*
int main() {
    // Teste 1: Letra minúscula 'a'
    int result1 = ft_toupper('a');
    if (result1 == 'A') {
        printf("Teste 1 ('a'): Passado\n");
    } else {
        printf("Teste 1 ('a'): Falhou, esperado: A, obtido: %d\n", result1);
    }

    // Teste 2: Letra minúscula 'z'
    int result2 = ft_toupper('z');
    if (result2 == 'Z') {
        printf("Teste 2 ('z'): Passado\n");
    } else {
        printf("Teste 2 ('z'): Falhou, esperado: Z, obtido: %d\n", result2);
    }

    // Teste 3: Letra maiúscula 'A'
    int result3 = ft_toupper('A');
    if (result3 == 'A') {
        printf("Teste 3 ('A'): Passado\n");
    } else {
        printf("Teste 3 ('A'): Falhou, esperado: A, obtido: %d\n", result3);
    }

    // Teste 4: Caractere numérico '5'
    int result4 = ft_toupper('5');
    if (result4 == '5') {
        printf("Teste 4 ('5'): Passado\n");
    } else {
        printf("Teste 4 ('5'): Falhou, esperado: 5, obtido: %d\n", result4);
    }

    // Teste 5: Caractere especial '$'
    int result5 = ft_toupper('$');
    if (result5 == '$') {
        printf("Teste 5 ('$'): Passado\n");
    } else {
        printf("Teste 5 ('$'): Falhou, esperado: $, obtido: %d\n", result5);
    }

    return 0;
}
*/