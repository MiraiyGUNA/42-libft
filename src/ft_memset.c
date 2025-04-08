/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 18:15:19 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/07 18:35:03 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*p;

	p = s;
	n = n - 1;
	while (n > 0)
	{
		*p++ = (unsigned char) c;
	}
	return (s);
}
