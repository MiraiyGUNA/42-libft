/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:19:54 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/22 16:26:20 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
/*
int	main(void)
{
	printf("Teste 1 (a): %d\n", ft_isalpha('a')); 
	printf("Teste 1 (z): %d\n", ft_isalpha('z'));

	printf("Teste 2 (A): %d\n", ft_isalpha('A'));
	printf("Teste 2 (Z): %d\n", ft_isalpha('Z'));
	
	printf("Teste 3 (0): %d\n", ft_isalpha('0'));
	printf("Teste 3 (!): %d\n", ft_isalpha('!'));
	printf("Teste 3 ( ): %d\n", ft_isalpha(' '));

	return (0);
}
*/
