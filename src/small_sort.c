#include "push_swap.h"

int	small_sort(t_stack **stack_a)
{
	int	first;
	int	second;
	int last;

	first = (*stack_a)->value;
	second = stack_second_last((*stack_a))->value;
	last = stack_last((*stack_a))->value;
	if (smallest((*stack_a)) == last && biggest((*stack_a)) == second)
		return (ft_rra(stack_a), 0);
	else if (smallest((*stack_a)) == second && biggest((*stack_a)) == first)
		return (ft_ra(stack_a), 0);
	else if (smallest((*stack_a)) == second && biggest((*stack_a)) == last)
		return (ft_sa(stack_a), 0);
	else if (smallest((*stack_a)) == last && biggest((*stack_a)) == first)
		return (ft_sa(stack_a), ft_rra(stack_a), 0);
	else if (smalles((*stack_a)) == first && biggest((*stack_a)) == second)
		return (ft_sa(stack_a), ft_ra(stack_a), 0);
	return (1);
}