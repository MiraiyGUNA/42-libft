/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 18:13:22 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/12 18:13:22 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <fcntl.h>    // Para open
//#include <unistd.h>   // Para close e write
//#include <stdio.h>    // Para perror

void	ft_putendl_fd(char *s, int fd)
{
	size_t	len;

	len = ft_strlen(s);
	write(fd, s, len);
	write(fd, "\n", 1);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int main(void)
{
    // Teste 1: Escrevendo uma string com newline na saída padrão
    ft_putendl_fd("Olá, mundo!", 1);

    // Teste 2: Escrevendo uma string vazia na saída padrão
    ft_putendl_fd("", 1);

    // Teste 3: Escrita da string em um arquivo
    int fd = open("ft_putendl_fd_test.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
    if (fd < 0)
    {
        perror("Erro ao abrir o arquivo");
        return 1;
    }
    ft_putendl_fd("Esta linha será escrita no arquivo.", fd);
    ft_putendl_fd("E esta também.", fd);
    close(fd);

    return 0;
}