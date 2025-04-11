/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:23:30 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/11 14:37:12 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
/*
int	main(void)
{
	printf("ft_isdigit('0') = %d\n", ft_isdigit('0'));
	printf("ft_isdigit('9') = %d\n", ft_isdigit('9'));
	printf("ft_isdigit('a') = %d\n", ft_isdigit('a'));
	printf("ft_isdigit('-') = %d\n", ft_isdigit('-'));
	printf("ft_isdigit(' ') = %d\n", ft_isdigit(' '));
}
*/
