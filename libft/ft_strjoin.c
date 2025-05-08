/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 13:21:16 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/11 15:05:35 by vde-maga         ###   ########.fr       */
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
int	main(void)
{
	char	s1[] = "French ";
	char	s2[] = "New Wave";
	char	*joined;

	joined = ft_strjoin(s1, s2);
	if (joined)
	{
		printf("String 1: %s\n", s1);
		printf("String 2: %s\n", s2);
		printf("String concatenada: %s\n", joined);
		free(joined);
	}
	else
	{
		printf("Erro ao concatenar as strings (resultou em NULL).\n");
	}
	return (0);
}
*/
