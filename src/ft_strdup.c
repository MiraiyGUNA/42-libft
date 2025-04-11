/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 11:49:17 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/10 11:50:33 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		lenght;

	lenght = 0;
	while (src[lenght] != '\0')
	{
		lenght++;
	}
	dest = (char *) malloc(sizeof(char) * (lenght + 1));
	if (dest == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < lenght)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int main(void) {
    // Teste 1: String vazia
    char *result1 = ft_strdup("");
    if (result1 != NULL && result1[0] == '\0') {
        printf("Teste 1 (String vazia): Passado\n");
        free(result1);
    } else {
        printf("Teste 1 (String vazia): Falhou\n");
    }

    // Teste 2: String simples
    char *result2 = ft_strdup("hello");
    if (result2 != NULL && strcmp(result2, "hello") == 0) {
        printf("Teste 2 (String simples): Passado\n");
        free(result2);
    } else {
        printf("Teste 2 (String simples): Falhou\n");
    }

    // Teste 3: String com espaços
    char *result3 = ft_strdup("hello world");
    if (result3 != NULL && strcmp(result3, "hello world") == 0) {
        printf("Teste 3 (String com espaços): Passado\n");
        free(result3);
    } else {
        printf("Teste 3 (String com espaços): Falhou\n");
    }

    // Teste 4: String com caracteres especiais
    char *result4 = ft_strdup("hello!@#$%^&*()");
    if (result4 != NULL && strcmp(result4, "hello!@#$%^&*()") == 0) {
        printf("Teste 4 (String com caracteres especiais): Passado\n");
        free(result4);
    } else {
        printf("Teste 4 (String com caracteres especiais): Falhou\n");
    }

    // Teste 5: Alocação falha (verificar se retorna NULL)
    char *result5 = ft_strdup("test");
    if(malloc(sizeof(char)) == NULL){
        printf("Teste 5 (Alocacao falha): Passado\n");
    } else {
        printf("Teste 5 (Alocacao falha): Falhou\n");
    }

    return 0;
}
*/