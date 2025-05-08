/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:30:41 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/22 16:31:43 by vde-maga         ###   ########.fr       */
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
	printf("Teste 1 (a): %d\n", ft_isascii('a'));
	printf("Teste 1 (z): %d\n", ft_isascii('z'));

	printf("Teste 2 (A): %d\n", ft_isascii('A'));
	printf("Teste 2 (Z): %d\n", ft_isascii('Z'));

	printf("Teste 3 (0): %d\n", ft_isascii('0'));
	printf("Teste 3 (!): %d\n", ft_isascii('!'));
	printf("Teste 3 ( ): %d\n", ft_isascii(' '));

	return (0);
}
*/
