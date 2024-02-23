/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abausa-v <abausa-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:35:02 by abausa-v          #+#    #+#             */
/*   Updated: 2023/12/13 14:46:54 by abausa-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	int		nprint;

	nb = n;
	nprint = 0;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
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
