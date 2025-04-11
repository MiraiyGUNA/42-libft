/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 17:34:44 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/11 14:39:31 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*
int	main(void)
{
	printf("ft_isprint(0) = %d\n", ft_isprint(0));
	printf("ft_isprint(31) = %d\n", ft_isprint(31));
	printf("ft_isprint(32) = %d\n", ft_isprint(32));
	printf("ft_isprint(127) = %d\n", ft_isprint(127));
	printf("ft_isprint(128) = %d\n", ft_isprint(128));
	printf("ft_isprint(-1) = %d\n", ft_isprint(-1));
}
*/
