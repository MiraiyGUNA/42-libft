/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 18:08:34 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/11 15:57:14 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	else
	{
		return (c);
	}
}
/*
int	main(void)
{
	char	test[] = "2001: A SPACE ODYSSEY";
	char	result[50];
	int		i;

	i = 0;
	while (test[i] != '\0')
	{
		result[i] = ft_toupper(test[i]);
		i++;
	}
	result[i] = '\0';
	printf("String original: %s\n", test);
	printf("String convertida para maiúsculas: %s\n", result);
	return (0);
}
*/
