/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:51:49 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/09 16:54:25 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *str1, char *str2, size_t n)
{
	while ((*str1 || *str2) && n > 0)
	{
		if (*str1 != *str2)
		{
			return ((unsigned char)*str1 - (unsigned char) *str2);
		}
		str1++;
		str2++;
		n--;
	}
	return (0);
}

