/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 15:41:46 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/09 16:30:29 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	c = (unsigned char)c;
	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == c)
		{
			return ((char *)str + i);
		}
		i--;
	}
	return (NULL);
}
/*
int main(void)
{
    // Teste 1: String vazia
    char *result1 = ft_strrchr("", 'a');
    if (result1 == NULL)
        printf("Teste 1 (String vazia): Passado\n");
    else
        printf("Teste 1 (String vazia): Falhou, obtido: %s\n", result1);

    // Teste 2: Caractere no final da string
    char *result2 = ft_strrchr("banana", 'a');
    if (result2 == "banana" + 5)
        printf("Teste 2 (Final): Passado\n");
    else
        printf("Teste 2 (Final): Falhou, esperado: banana+5, obtido: %s\n", result2);

    // Teste 3: Caractere no meio da string
    char *result3 = ft_strrchr("banana", 'n');
    if (result3 == "banana" + 2)
        printf("Teste 3 (Meio): Passado\n");
    else
        printf("Teste 3 (Meio): Falhou, esperado: banana+2, obtido: %s\n", result3);

    // Teste 4: Caractere no início da string
    char *result4 = ft_strrchr("banana", 'b');
    if (result4 == "banana")
        printf("Teste 4 (Início): Passado\n");
    else
        printf("Teste 4 (Início): Falhou, esperado: banana, obtido: %s\n", result4);

    // Teste 5: Caractere não encontrado
    char *result5 = ft_strrchr("banana", 'x');
    if (result5 == NULL)
        printf("Teste 5 (Não encontrado): Passado\n");
    else
        printf("Teste 5 (Não encontrado): Falhou, obtido: %s\n", result5);

    // Teste 6: Caractere é o NUL terminador
    char *result6 = ft_strrchr("banana\0", '\0');
    if (result6 == "banana\0")
        printf("Teste 6 (NUL terminador): Passado\n");
    else
        printf("Teste 6 (NUL terminador): Falhou, esperado: banana\\0, obtido: %s\n", result6);

    return (0);
}
*/