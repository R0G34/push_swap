/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abausa-v <abausa-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 12:54:39 by abausa-v          #+#    #+#             */
/*   Updated: 2024/03/04 12:54:42 by abausa-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_stack **lst_a, char *str)
{
	t_stack	*last;

	last = ft_stack_last(*lst_a);
	last->next = (*lst_a);
	(*lst_a) = (*lst_a)->next;
	last->next->next = NULL;
	ft_printf("%s", str);
}

void	ft_rb(t_stack **lst_b, char *str)
{
	t_stack	*last;

	last = ft_stack_last(*lst_b);
	last->next = (*lst_b);
	(*lst_b) = (*lst_b)->next;
	last->next->next = NULL;
	ft_printf("%s", str);
}

void	ft_rr(t_stack **lst_a, t_stack **lst_b, char *str)
{
	ft_ra(lst_a, "");
	ft_rb(lst_b, "");
	ft_printf("%s", str);
}
