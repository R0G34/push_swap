/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abausa-v <abausa-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 12:52:54 by abausa-v          #+#    #+#             */
/*   Updated: 2024/03/04 12:52:57 by abausa-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	leaks(void)
{
	system("leaks -q push_swap");
}

int	ft_error(int e)
{
	write(2, "Error\n", 6);
	return (e);
}

void	*ft_arr_free(char **splt)
{
	int	i;

	i = 0;
	while (splt && splt[i])
	{
		free(splt[i]);
		i++;
	}
	if (splt)
		free(splt);
	return (NULL);
}

void	ft_stk_free(t_stack **stack)
{
	t_stack	*current;
	t_stack	*next;

	current = *stack;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*stack = NULL;
}
