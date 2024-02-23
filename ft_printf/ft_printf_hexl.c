/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexl.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abausa-v <abausa-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:13:22 by abausa-v          #+#    #+#             */
/*   Updated: 2023/12/13 14:53:59 by abausa-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_hexl(unsigned long n)
{
	char	*str;
	int		count;

	str = ft_itoa_base(n, HEXL);
	count = 0;
	ft_putstr_fd(str, 1);
	count = ft_strlen(str);
	free (str);
	return (count);
}
