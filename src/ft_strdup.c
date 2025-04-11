/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 11:49:17 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/11 15:02:45 by vde-maga         ###   ########.fr       */
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
	dest = (char *)malloc(sizeof(char) * (lenght + 1));
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
int	main(void)
{
	char	src[] = "Clash Royale";
	char	*duplicated;

	duplicated = ft_strdup(src);
	if (duplicated)
	{
		printf("String original: %s\n", src);
		printf("String duplicada: %s\n", duplicated);
		free(duplicated);
	}
	else
	{
		printf("Erro ao duplicar a string (resultou em NULL).\n");
	}
	return (0);
}
*/
