/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 15:59:52 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/10 14:52:13 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

int	ft_atoi(const char *str)
{
	unsigned long	result;
	int				signal;

	signal = 1;
	result = 0;
	while ((*str != '\0') && ((*str == 32) || (*str >= 9 && *str <= 13)))
		str++;
	if (*str == '-')
	{
		signal = signal * -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while ((*str != '\0') && (*str >= '0' && *str <= '9'))
	{
		result = (result * 10) + (*str - '0');
		str++;
		if ((result > LONG_MAX) && (signal == 1))
			return (-1);
		else if ((result > LONG_MAX) && (signal == -1))
			return (0);
	}
	return (result * signal);
}
/*
int	main(void)
{
	const char	*test_cases[] =
	{
		"42",
		"-42",
		"2147483647",
		"-2147483648",
		"  +12345",
		"  -12345",
		"123abc",
		"abc123",
		"",
		"     ",
		"9223372036854775807",
		"-9223372036854775808"
	};
	int	i = 0;
	while (i < (int)(sizeof(test_cases) / sizeof(test_cases[0])))
	{
		const char	*str = test_cases[i];
		int	result = ft_atoi(str);
		printf("Entrada: \"%s\" => Saída: %d\n", str, result);
		i++;
	}
	return (0);
}
*/
