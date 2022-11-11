/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <avapaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 01:57:31 by avapaill          #+#    #+#             */
/*   Updated: 2022/11/11 02:02:28 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	write_number(unsigned int nb, int fd)
{	
	if (nb < 10)
	{
		ft_putchar_fd(nb + '0', fd);
		return ;
	}	
	write_number(nb / 10, fd);
	write_number(nb % 10, fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		write_number((unsigned int) -1 * n, fd);
	}
	else
		write_number(n, fd);
}
