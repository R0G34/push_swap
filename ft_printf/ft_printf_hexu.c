/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexu.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abausa-v <abausa-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:15:11 by abausa-v          #+#    #+#             */
/*   Updated: 2023/12/15 12:49:42 by abausa-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_hexu(unsigned long n)
{
	char	*str;
	int		count;

	str = ft_itoa_base(n, HEXU);
	count = 0;
	ft_putstr_fd(str, 1);
	count = ft_strlen(str);
	free (str);
	return (count);
}
