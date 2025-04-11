/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 11:15:44 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/10 11:20:55 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	const unsigned char	*p;

	p = (const unsigned char *)str;
	while (n != 0)
	{
		if (*p == (unsigned char)c)
		{
			return ((void *)p);
		}
		n--;
		p++;
	}
	return (NULL);
}


/*
int main(void)
{
    // Teste 1: String vazia
    void *result1 = ft_memchr("", 'a', 0);
    if (result1 == NULL)
        printf("Teste 1 (String vazia): Passado\n");
    else
        printf("Teste 1 (String vazia): Falhou\n");

    // Teste 2: Caractere encontrado no início
    void *result2 = ft_memchr("banana", 'b', 6);
    if (result2 == "banana")
        printf("Teste 2 (Início): Passado\n");
    else
        printf("Teste 2 (Início): Falhou, esperado: banana, obtido: %s\n", (char *)result2);

    // Teste 3: Caractere encontrado no meio
    void *result3 = ft_memchr("banana", 'a', 6);
    if (result3 == "banana" + 1)
        printf("Teste 3 (Meio): Passado\n");
    else
        printf("Teste 3 (Meio): Falhou, esperado: banana+1, obtido: %s\n", (char *)result3);

    // Teste 4: Caractere encontrado no fim
    void *result4 = ft_memchr("banana", 'a', 6);
    if (result4 == "banana" + 5)
        printf("Teste 4 (Fim): Passado\n");
    else
        printf("Teste 4 (Fim): Falhou, esperado: banana+5, obtido: %s\n", (char *)result4);

    // Teste 5: Caractere não encontrado
    void *result5 = ft_memchr("banana", 'x', 6);
    if (result5 == NULL)
        printf("Teste 5 (Não encontrado): Passado\n");
    else
        printf("Teste 5 (Não encontrado): Falhou, obtido: %s\n", (char *)result5);

    // Teste 6: n menor que o tamanho da string e caractere no início
    void *result6 = ft_memchr("banana", 'b', 3);
    if (result6 == "banana")
        printf("Teste 6 (n pequeno, inicio): Passado\n");
    else
        printf("Teste 6 (n pequeno, inicio): Falhou, esperado: banana, obtido: %s\n", (char *)result6);

    // Teste 7: n menor que o tamanho da string e caractere não encontrado
    void *result7 = ft_memchr("banana", 'x', 3);
    if (result7 == NULL)
        printf("Teste 7 (n pequeno, nao encontrado): Passado\n");
    else
        printf("Teste 7 (n pequeno, nao encontrado): Falhou, obtido: %s\n", (char *)result7);

    return 0;
}
*/