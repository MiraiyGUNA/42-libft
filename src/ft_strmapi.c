/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 17:39:26 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/13 17:39:26 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		length;
	int		i;
	char	*str;

	if (!s || !f)
		return (NULL);
	length = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (length + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < length)
    {
		str[i] = f(i, s[i]);
        i++;
    }
	str[i] = '\0';
	return (str);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char toupper_even(unsigned int index, char c)
{
    if (index % 2 == 0)
    {
        if (c >= 'a' && c <= 'z')
            return c - 32;
    }
    return c;
}

int main(void)
{
    char *original = "zero ranger é bom demais";
    char *mapped;

    mapped = ft_strmapi(original, toupper_even);
    if (mapped == NULL)
    {
        printf("Erro: Falha na alocação de memória.\n");
        return 1;
    }

    printf("String original: %s\n", original);
    printf("String transformada (pares em maiúsculas): %s\n", mapped);

    free(mapped);
    return 0;
}
