/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abausa-v <abausa-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:01:09 by abausa-v          #+#    #+#             */
/*   Updated: 2023/12/13 14:44:57 by abausa-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(unsigned long nb, char *base)
{
	char			*hex;
	unsigned long	nbr;
	unsigned long	len;

	len = 0;
	nbr = nb;
	while (nb)
	{
		len++;
		nb /= 16;
	}
	if (nbr == 0)
		len++;
	hex = malloc(sizeof(char) * (len + 1));
	if (!hex)
		return (NULL);
	hex[len] = '\0';
	while (nbr != 0 || len)
	{
		hex[--len] = base[nbr % 16];
		nbr /= 16;
	}
	return (hex);
}
