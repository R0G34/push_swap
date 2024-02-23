/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abausa-v <abausa-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 10:20:18 by abausa-v          #+#    #+#             */
/*   Updated: 2024/02/23 14:21:13 by abausa-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void	ft_push_swap(t_stack **a, t_stack **b, int size)
{
	if (size == 2 && !ft_is_sorted(*a))
		ft_do_sa(a);
	else if (size == 3)
		ft_small_sort(a);
	else if (size > 3 && !ft_is_sorted(*a))
		ft_sort_algorithm(a, b);
}

int	main(int argc, char **argv)
{
	t_stack *a;
	t_stack *b;
	int		size;

	if (argc < 2)
		return (0);
	if (!ft_is_correct_input(argv))
		ft_exit_error(NULL, NULL);
	b = NULL;
	a = ft_fill_stack_values(argc, argv);
	size = ft_get_size_stack(a);
	ft_assign_index(a, size + 1);
	ft_push_swap(&a, &b, size);
	ft_free_stack(&a);
	ft_free_stack(&b);
	return (0);
}
