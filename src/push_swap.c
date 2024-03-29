/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abausa-v <abausa-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 12:53:30 by abausa-v          #+#    #+#             */
/*   Updated: 2024/03/06 19:16:53 by abausa-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_algorithm(t_stack **lst_a, t_stack **lst_b)
{
	if (stack_length(*lst_a) == 2)
		return (ft_sa(lst_a, "sa\n"), 0);
	else if (stack_length(*lst_a) == 3)
		sorting_three_numbers(lst_a);
	else if (stack_length(*lst_a) == 4)
		sorting_four_numbers(lst_a, lst_b);
	else if (stack_length(*lst_a) == 5)
		sorting_five_numbers(lst_a, lst_b);
	else
		ft_radix(lst_a, lst_b);
	return (0);
}

int	args_sign_numbers_or_spaces(int argc, char **argv)
{
	int	a;
	int	i;

	a = 1;
	while (a < argc)
	{
		i = 0;
		while ((argv[a][i]) && (ft_isdigit(argv[a][i])
			|| (argv[a][i] == ' ')
			|| (argv[a][i] == '-' && ft_isdigit(argv[a][i + 1])
			&& !ft_isdigit(argv[a][i - 1]))
			|| (argv[a][i] == '+' && ft_isdigit(argv[a][i + 1])
			&& !ft_isdigit(argv[a][i - 1]))))
			i++;
		if (argv[a][i] && !ft_isdigit(argv[a][i]))
			return (1);
		a++;
	}
	return (0);
}

t_stack	*args_to_integer_and_add(int argc, char **argv)
{
	t_stack		*lst_aux;
	char		**res_split;
	int			j;
	int			a;
	long long	num;

	lst_aux = NULL;
	a = 1;
	while (a < argc)
	{
		res_split = ft_split(argv[a], ' ');
		if (!res_split)
			return (ft_stk_free(&lst_aux), NULL);
		j = -1;
		while (res_split[++j])
		{
			num = ft_atoll_int((char *)res_split[j]);
			if (num > INT_MAX || num < INT_MIN)
				return (ft_arr_free(res_split), ft_stk_free(&lst_aux), NULL);
			ft_stack_add((int)num, &lst_aux);
		}
		a++;
		ft_arr_free(res_split);
	}
	return (lst_aux);
}

int	not_repeated_numbers(t_stack *begin)
{
	t_stack	*i;
	t_stack	*j;
	int		i_number;

	i = begin;
	while (i != NULL)
	{
		i_number = i->number;
		j = i->next;
		while (j != NULL)
		{
			if (j->number == i_number)
				return (1);
			j = j->next;
		}
		i = i->next;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	t_stack	*lst_a;
	t_stack	*lst_b;

	lst_a = NULL;
	lst_b = NULL;
	if (argc > 1 && argv[1])
	{
		if (args_sign_numbers_or_spaces(argc, argv) != 0)
			ft_error(1);
		else
		{
			lst_a = args_to_integer_and_add(argc, argv);
			if (lst_a == NULL)
				ft_error(1);
		}
		if (numbers_in_order(lst_a) != 0)
			return (ft_stk_free(&lst_a), 0);
		if (not_repeated_numbers(lst_a) == 0 && numbers_in_order(lst_a) == 0)
			ft_algorithm(&lst_a, &lst_b);
		else
			ft_error(1);
	}
	ft_stk_free(&lst_a);
	ft_stk_free(&lst_b);
	return (0);
}
