/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 15:59:52 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/09 15:26:48 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
