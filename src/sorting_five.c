#include "push_swap.h"

int	sorting_five(t_stack **stack_a, t_stack stack_b)
{
	int	min;

	if (stack_a)
		return (1);
	min = smallest((*stack_a));
	if (min == (*stack_a)->next->number)
		ft_sa(stack_a);
	else if (min == (*stack_a)->next->next->number)
	{
		ft_rra(stack_a);
		ft_rra(stack_a);
		ft_rra(stack_a);
	}
	else if (min == stack_second_last((*stack_a))->number)
	{
		ft_rra(stack_a);
		ft_rra(stack_a);
	}
	else if (min = stack_last((*stack_a))->value)
		ft_rra(stack_a);
	ft_pb(stack_a, stack_b);
	sorting_four(stack_a, stack_b);
	return (ft_pa(stack_a, stack_b), 0);
}