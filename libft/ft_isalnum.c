/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:26:33 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/22 16:25:22 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
int	main(void)
{

	printf("Teste 1 (a): %d\n", ft_isalnum('a'));
	printf("Teste 1 (z): %d\n", ft_isalnum('z'));

	printf("Teste 2 (A): %d\n", ft_isalnum('A'));
	printf("Teste 2 (Z): %d\n", ft_isalnum('Z'));

	printf("Teste 3 (0): %d\n", ft_isalnum('0'));
	printf("Teste 3 (9): %d\n", ft_isalnum('9'));

	printf("Teste 4 (!): %d\n", ft_isalnum('!'));
	printf("Teste 4 ( ): %d\n", ft_isalnum(' '));
	printf("Teste 4 (.): %d\n", ft_isalnum('.'));

	return (0);
}
*/
