/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 18:15:19 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/11 14:56:13 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_memset(void *ptr, int value, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = ptr;
	i = 0;
	while (i < n)
	{
		str[i] = value;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	buffer[50];
	int		value;
	size_t	n;

	value = '*';
	n = 5;
	ft_memset(buffer, value, n);
	buffer[n] = '\0';
	printf("Buffer após ft_memset: %s\n", buffer);
	return (0);
}
*/
