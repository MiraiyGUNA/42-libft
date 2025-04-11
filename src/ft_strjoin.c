/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 13:21:16 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/10 13:35:20 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*dest;

	if (!s1 || !s2)
		return (NULL);
	dest = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!dest)
		return (NULL);
	i = -1;
	j = 0;
	while (s1[++i])
	{
		dest[j] = s1[i];
		j++;
	}
	i = -1;
	while (s2[++i])
	{
		dest[j] = s2[i];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
/*
int main(void) {
    // Teste 1: Strings vazias
    char *result1 = ft_strjoin("", "");
    if (result1 && result1[0] == '\0') {
        printf("Teste 1 (Strings vazias): Passado\n");
        free(result1);
    } else {
        printf("Teste 1 (Strings vazias): Falhou\n");
        if (result1) free(result1);
    }

    // Teste 2: s1 vazio, s2 não vazio
    char *result2 = ft_strjoin("", "hello");
    if (result2 && result2[0] == 'h' && result2[4] == '\0') {
        printf("Teste 2 (s1 vazio): Passado\n");
        free(result2);
    } else {
        printf("Teste 2 (s1 vazio): Falhou\n");
        if (result2) free(result2);
    }

    // Teste 3: s2 vazio, s1 não vazio
    char *result3 = ft_strjoin("world", "");
    if (result3 && result3[0] == 'w' && result3[4] == '\0') {
        printf("Teste 3 (s2 vazio): Passado\n");
        free(result3);
    } else {
        printf("Teste 3 (s2 vazio): Falhou\n");
        if (result3) free(result3);
    }

    // Teste 4: Strings não vazias
    char *result4 = ft_strjoin("hello", " world");
    if (result4 && result4[0] == 'h' && result4[9] == '\0') {
        printf("Teste 4 (Strings não vazias): Passado\n");
        free(result4);
    } else {
        printf("Teste 4 (Strings não vazias): Falhou\n");
        if (result4) free(result4);
    }

    // Teste 5: NULL s1
    char *result5 = ft_strjoin(NULL, "world");
    if (result5 == NULL) {
        printf("Teste 5 (s1 NULL): Passado\n");
    } else {
        printf("Teste 5 (s1 NULL): Falhou\n");
        free(result5);
    }

    // Teste 6: NULL s2
    char *result6 = ft_strjoin("hello", NULL);
    if (result6 == NULL) {
        printf("Teste 6 (s2 NULL): Passado\n");
    } else {
        printf("Teste 6 (s2 NULL): Falhou\n");
        free(result6);
    }

    return 0;
}
*/