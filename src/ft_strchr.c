/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:45:40 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/09 15:49:15 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>


char	*ft_strchr(const char *str, int c)
{
	int	i;

	c = (unsigned char)c;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			return ((char *)&str[i]);
		}
		i++;
	}
	if (c == '\0')
	{
		return ((char *)&str[i]);
	}
	return (NULL);
}
/*
int main(void)
{
    // Teste 1: Caractere encontrado no início
    char *result1 = ft_strchr("banana", 'b');
    if (result1 == "banana")
        printf("Teste 1 (Início): Passado\n");
    else
        printf("Teste 1 (Início): Falhou, esperado: banana, obtido: %s\n", result1);

    // Teste 2: Caractere encontrado no meio
    char *result2 = ft_strchr("banana", 'a');
    if (result2 == "banana" + 1)
        printf("Teste 2 (Meio): Passado\n");
    else
        printf("Teste 2 (Meio): Falhou, esperado: banana+1, obtido: %s\n", result2);

    // Teste 3: Caractere encontrado no fim
    char *result3 = ft_strchr("banana", 'a');
    if (result3 == "banana" + 5)
        printf("Teste 3 (Fim): Passado\n");
    else
        printf("Teste 3 (Fim): Falhou, esperado: banana+5, obtido: %s\n", result3);

    // Teste 4: Caractere não encontrado
    char *result4 = ft_strchr("banana", 'x');
    if (result4 == NULL)
        printf("Teste 4 (Não encontrado): Passado\n");
    else
        printf("Teste 4 (Não encontrado): Falhou, obtido: %s\n", result4);

    // Teste 5: String vazia
    char *result5 = ft_strchr("", 'a');
    if (result5 == NULL)
        printf("Teste 5 (String vazia): Passado\n");
    else
        printf("Teste 5 (String vazia): Falhou, obtido: %s\n", result5);

    // Teste 6: Caractere nulo no final da string
    char *result6 = ft_strchr("banana", '\0');
    if (result6 == "banana" + 6)
        printf("Teste 6 (Nulo no fim): Passado\n");
    else
        printf("Teste 6 (Nulo no fim): Falhou, esperado: banana+6, obtido: %s\n", result6);

    return 0;
}
*/