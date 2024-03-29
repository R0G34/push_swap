/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abausa-v <abausa-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 12:54:56 by abausa-v          #+#    #+#             */
/*   Updated: 2024/03/04 12:55:02 by abausa-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sorting_five_numbers(t_stack **lst_a, t_stack **lst_b)
{
	int	min;

	if (!lst_a)
		return (1);
	min = ft_min_node((*lst_a));
	if (min == (*lst_a)->next->number)
		ft_sa(lst_a, "sa\n");
	else if (min == (*lst_a)->next->next->number)
	{
		ft_rra(lst_a, "rra\n");
		ft_rra(lst_a, "rra\n");
		ft_rra(lst_a, "rra\n");
	}
	else if (min == ft_stack_second_last((*lst_a))->number)
	{
		ft_rra(lst_a, "rra\n");
		ft_rra(lst_a, "rra\n");
	}
	else if (min == ft_stack_last((*lst_a))->number)
		ft_rra(lst_a, "rra\n");
	ft_pb(lst_a, lst_b, "pb\n");
	sorting_four_numbers(lst_a, lst_b);
	return (ft_pa(lst_a, lst_b, "pa\n"), 0);
}

int	sorting_four_numbers(t_stack **lst_a, t_stack **lst_b)
{
	int	min;

	if (!lst_a)
		return (1);
	min = ft_min_node((*lst_a));
	if (min == (*lst_a)->next->number)
		ft_sa(lst_a, "sa\n");
	else if (min == ft_stack_second_last((*lst_a))->number)
	{
		ft_ra(lst_a, "ra\n");
		ft_ra(lst_a, "ra\n");
	}
	else if (min == ft_stack_last((*lst_a))->number)
		ft_rra(lst_a, "rra\n");
	ft_pb(lst_a, lst_b, "pb\n");
	sorting_three_numbers(lst_a);
	return (ft_pa(lst_a, lst_b, "pa\n"), 0);
}

int	sorting_three_numbers(t_stack **lst_a)
{
	int	first;
	int	second;
	int	third;

	first = (*lst_a)->number;
	second = ft_stack_second_last((*lst_a))->number;
	third = ft_stack_last((*lst_a))->number;
	if (ft_min_node((*lst_a)) == third && ft_max_node((*lst_a)) == second)
		return (ft_rra(lst_a, "rra\n"), 0);
	else if (ft_min_node((*lst_a)) == second && ft_max_node((*lst_a)) == first)
		return (ft_ra(lst_a, "ra\n"), 0);
	else if (ft_min_node((*lst_a)) == second && ft_max_node((*lst_a)) == third)
		return (ft_sa(lst_a, "sa\n"), 0);
	else if (ft_min_node((*lst_a)) == third && ft_max_node((*lst_a)) == first)
		return (ft_sa(lst_a, "sa\n"), ft_rra(lst_a, "rra\n"), 0);
	else if (ft_min_node((*lst_a)) == first && ft_max_node((*lst_a)) == second)
		return (ft_sa(lst_a, "sa\n"), ft_ra(lst_a, "ra\n"), 0);
	return (1);
}
