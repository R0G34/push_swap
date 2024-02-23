/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_u.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abausa-v <abausa-v@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:30:30 by abausa-v          #+#    #+#             */
/*   Updated: 2023/12/13 11:45:11 by abausa-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_fd_u(long n, int fd)
{
	long	nb;
	int		nprint;

	nb = n;
	nprint = 0;
	if (nb > 9)
	{
		nprint = ft_putnbr_fd(nb / 10, fd);
		nb = nb % 10;
	}
	if (nb <= 9)
	{
		ft_putchar_fd(nb + '0', fd);
		nprint++;
	}
	return (nprint);
}
