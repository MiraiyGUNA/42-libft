/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 17:47:54 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/12 17:47:54 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <fcntl.h>     // Para open
//#include <unistd.h>    // Para close
//#include <stdio.h>     // Para perror
//#include <limits.h>    // Para INT_MAX e INT_MIN

void	ft_putnbr_fd(int n, int fd)
{
	long int	nbr;

	nbr = n;
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = nbr * -1;
	}
	if (nbr > 9)
		ft_putnbr_fd(nbr / 10, fd);
	ft_putchar_fd(nbr % 10 + '0', fd);
}

void    ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

int main(void)
{
    // Teste 1: Números positivos, negativos e zero em stdout
    ft_putnbr_fd(42, 1);
    ft_putchar_fd('\n', 1);
    
    ft_putnbr_fd(-42, 1);
    ft_putchar_fd('\n', 1);
    
    ft_putnbr_fd(0, 1);
    ft_putchar_fd('\n', 1);
    
    // Teste 2: Números de múltiplos dígitos
    ft_putnbr_fd(123456789, 1);
    ft_putchar_fd('\n', 1);
    
    ft_putnbr_fd(-123456789, 1);
    ft_putchar_fd('\n', 1);
    
    // Teste 3: Valores extremos
    ft_putnbr_fd(INT_MAX, 1);
    ft_putchar_fd('\n', 1);
    
    ft_putnbr_fd(INT_MIN, 1);
    ft_putchar_fd('\n', 1);
    
    // Teste 4: Escrita dos resultados em um arquivo
    int fd = open("ft_putnbr_fd_test.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
    if (fd < 0)
    {
        perror("Erro ao abrir o arquivo");
        return 1;
    }
    ft_putnbr_fd(987654321, fd);
    ft_putchar_fd('\n', fd);
    
    ft_putnbr_fd(-987654321, fd);
    ft_putchar_fd('\n', fd);
    close(fd);
    
    return 0;
}