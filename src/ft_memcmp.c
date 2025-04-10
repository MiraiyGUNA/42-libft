/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 11:16:34 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/10 11:24:34 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char	*pstr1;
	const unsigned char	*pstr2;
	int					i;

	pstr1 = (const unsigned char *)str1;
	pstr2 = (const unsigned char *)str2;
	i = 0;
	while (n != 0)
	{
		if (pstr1[i] != pstr2[i])
			return (pstr1[i] - pstr2[i]);
		i++;
		n--;
	}
	return (0);
}
