/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 18:04:44 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/14 14:10:51 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	vowel_to_upper_consonant_to_lower(unsigned int index, char *c)
{
	(void)index;
	if ((*c >= 'A' && *c <= 'Z') || (*c >= 'a' && *c <= 'z'))
	{
		if (*c == 'a' || *c == 'e' || *c == 'i' || *c == 'o' || *c == 'u'
			|| *c == 'A' || *c == 'E' || *c == 'I' || *c == 'O' || *c == 'U')
		{
			if (*c >= 'a' && *c <= 'z')
				*c = *c - 32;
		}
		else
		{
			if (*c >= 'A' && *c <= 'Z')
				*c = *c + 32;
		}
	}
}

int	main(void)
{
	char	str[] = "WiND RiSeS";

	printf("Antes: %s\n", str);
	ft_striteri(str, vowel_to_upper_consonant_to_lower);
	printf("Depois: %s\n", str);
	return (0);
}
*/
