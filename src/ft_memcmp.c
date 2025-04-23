/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 11:16:34 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/23 16:44:31 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*pstr1;
	const unsigned char	*pstr2;
	int					i;

	pstr1 = (const unsigned char *)s1;
	pstr2 = (const unsigned char *)s2;
	i = 0;
	while (n != 0)
	{
		if (pstr1[i] != pstr2[i])
			return (pstr1[i] - pstr2[i]);
		i++;
		n--;
	}
	return (0);
}
/*
int	main(void)
{
	int	result1;
	int	result2;
	int	result3;
	int	result4;
	int	result5;
	int	result6;
	int	result7;

	// Teste 1: Strings iguais, n = tamanho das strings
	result1 = ft_memcmp("abc", "abc", 3);
	if (result1 == 0)
		printf("Teste 1 (Strings iguais): Passado\n");
	else
		printf("Teste 1 (Strings iguais): Falhou, esperado: 0, obtido: %d\n",
			result1);
	// Teste 2: Strings diferentes, n = tamanho das strings
	result2 = ft_memcmp("abc", "abd", 3);
	if (result2 == -1) // 'c' - 'd' = -1
		printf("Teste 2 (Strings diferentes): Passado\n");
	else
		printf("Teste 2 (Strings diferentes): Falhou, esperado: -1, obtido:
			%d\n", result2);
	// Teste 3: Strings iguais, n > tamanho das strings
	result3 = ft_memcmp("abc", "abc", 5);
	if (result3 == 0)
		printf("Teste 3 (Strings iguais, n > tamanho): Passado\n");
	else
		printf("Teste 3 (Strings iguais, n > tamanho): Falhou, esperado: 0,
			obtido: %d\n", result3);
	// Teste 4: Strings diferentes, n > tamanho das strings
	result4 = ft_memcmp("abc", "abd", 5);
	if (result4 == -1) // 'c' - 'd' = -1
		printf("Teste 4 (Strings diferentes, n > tamanho): Passado\n");
	else
		printf("Teste 4 (Strings diferentes, n > tamanho): Falhou, esperado: -1,
			obtido: %d\n", result4);
	// Teste 5: Strings vazias, n = 0
	result5 = ft_memcmp("", "", 0);
	if (result5 == 0)
		printf("Teste 5 (Strings vazias): Passado\n");
	else
		printf("Teste 5 (Strings vazias): Falhou, esperado: 0, obtido: %d\n",
			result5);
	// Teste 6: n = 1, strings diferentes no primeiro byte
	result6 = ft_memcmp("a", "b", 1);
	if (result6 == -1)
		printf("Teste 6 (n=1, diferente): Passado\n");
	else
		printf("Teste 6 (n=1, diferente): Falhou, esperado: -1, obtido: %d\n",
			result6);
	// Teste 7: n = 1, strings iguais no primeiro byte
	result7 = ft_memcmp("a", "a", 1);
	if (result7 == 0)
		printf("Teste 7 (n=1, igual): Passado\n");
	else
		printf("Teste 7 (n=1, igual): Falhou, esperado: 0, obtido: %d\n",
			result7);
	return (0);
}
*/
