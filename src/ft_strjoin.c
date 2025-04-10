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
