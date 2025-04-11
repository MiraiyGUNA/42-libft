/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:19:54 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/07 17:32:08 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
/*
int main() {
    // Teste 1: Caracteres alfabéticos minúsculos
    printf("Teste 1 (a): %d\n", ft_isalpha('a')); // Esperado: 1
    printf("Teste 1 (z): %d\n", ft_isalpha('z')); // Esperado: 1

    // Teste 2: Caracteres alfabéticos maiúsculos
    printf("Teste 2 (A): %d\n", ft_isalpha('A')); // Esperado: 1
    printf("Teste 2 (Z): %d\n", ft_isalpha('Z')); // Esperado: 1

    // Teste 3: Caracteres não alfabéticos
    printf("Teste 3 (0): %d\n", ft_isalpha('0')); // Esperado: 0
    printf("Teste 3 (!): %d\n", ft_isalpha('!')); // Esperado: 0
    printf("Teste 3 ( ): %d\n", ft_isalpha(' ')); // Esperado: 0

    // Teste 4: Caracteres especiais
    printf("Teste 4 (EOF): %d\n", ft_isalpha(EOF)); // Esperado: 0 (ou comportamento indefinido, mas deve não crashar)

    return 0;
}
*/