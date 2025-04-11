/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:30:41 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/07 17:34:09 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
int	main(void)
{
	printf("ft_isascii(0) = %d\n", ft_isascii(0));
	printf("ft_isascii(31) = %d\n", ft_isascii(31));
	printf("ft_isascii(32) = %d\n", ft_isascii(32));
	printf("ft_isascii(127) = %d\n", ft_isascii(127));
	printf("ft_isascii(128) = %d\n", ft_isascii(128));
	printf("ft_isascii(-1) = %d\n", ft_isascii(-1));
}
*/