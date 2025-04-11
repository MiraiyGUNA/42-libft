/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:26:33 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/07 12:34:34 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
int main() {
    // Teste 1: Caracteres alfanuméricos minúsculos
    printf("Teste 1 (a): %d\n", ft_isalnum('a')); // Esperado: 1
    printf("Teste 1 (z): %d\n", ft_isalnum('z')); // Esperado: 1

    // Teste 2: Caracteres alfanuméricos maiúsculos
    printf("Teste 2 (A): %d\n", ft_isalnum('A')); // Esperado: 1
    printf("Teste 2 (Z): %d\n", ft_isalnum('Z')); // Esperado: 1

    // Teste 3: Dígitos
    printf("Teste 3 (0): %d\n", ft_isalnum('0')); // Esperado: 1
    printf("Teste 3 (9): %d\n", ft_isalnum('9')); // Esperado: 1

    // Teste 4: Caracteres não alfanuméricos
    printf("Teste 4 (!): %d\n", ft_isalnum('!')); // Esperado: 0
    printf("Teste 4 ( ): %d\n", ft_isalnum(' ')); // Esperado: 0
    printf("Teste 4 (.): %d\n", ft_isalnum('.')); // Esperado: 0

    // Teste 5: Caracteres especiais
    printf("Teste 5 (EOF): %d\n", ft_isalnum(EOF)); // Esperado: 0 (ou comportamento indefinido, mas deve não crashar)

    return 0;
}
*/