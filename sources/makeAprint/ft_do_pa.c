/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_pa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abausa-v <abausa-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 10:11:53 by abausa-v          #+#    #+#             */
/*   Updated: 2024/02/23 14:17:29 by abausa-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_do_pa(t_stack **a, t_stack **b)
{
	ft_push(b, a);
	ft_printf("pa\n");
}