/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 17:09:03 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/12 17:09:03 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <fcntl.h>    // Para as flags de abertura de arquivo
//#include <unistd.h>   // Para a função close
//#include <stdio.h>    // Para a função perror
void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	if (!s || fd < 0)
		return ;
	i = 0;
	while (s[i])
    {
		ft_putchar_fd(s[i], fd);
        i++;
    }
}

int main(void)
{
    // Teste 1: Escrevendo uma string em stdout (descritor 1)
    ft_putstr_fd("Teste: Hello, world!\n", 1);

    // Teste 2: Escrevendo uma string vazia em stdout
    ft_putstr_fd("", 1);
    ft_putstr_fd("\n", 1);

    // Teste 3: Escrevendo a string em um arquivo
    int fd = open("teste.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
    if (fd < 0)
    {
        perror("Erro ao abrir o arquivo");
        return 1;
    }
    ft_putstr_fd("Este é um teste para escrever no arquivo teste.txt\n", fd);
    close(fd);

    // Teste 4: Passando uma string nula (não deverá produzir saída nem erro)
    ft_putstr_fd(NULL, 1);

    // Teste 5: Usando um descritor inválido (por exemplo, -1)
    ft_putstr_fd("Teste com fd inválido\n", -1);

    return 0;
}
