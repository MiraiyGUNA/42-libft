/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 11:54:46 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/10 13:18:29 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	str_size;

	if (!s)
		return (NULL);
	str_size = ft_strlen(s);
	if (str_size < start)
	{
		dest = (char *)malloc(sizeof(char) * 1);
		if (!dest)
			return (NULL);
		dest[0] = '\0';
		return (dest);
	}
	if (len > str_size - start)
		len = str_size - start;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	ft_memcpy(dest, s + start, len);
	dest[len] = '\0';
	return (dest);
}
