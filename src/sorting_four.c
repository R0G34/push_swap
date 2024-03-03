#include "push_swap.h"

int	sorting_four(t_stack **stack_a, t_stack **stack_b)
{
	int	min;

	if (!stack_a)
		return (1);
	min = smallest((*stack_a));
	if (min == (*stack_a)->next->value)
		ft_sa(stack_a);
	else if (min == stack_second_last((*stack_a))->number)
	{
		ft_ra(stack_a);
		ft_ra(stack_a);
	}
	else if(min == stack_last((*stack_a))->number)
		ft_rra(stack_a);
	ft_pb(stack_a, stack_b);
	small_sort(stack_a);
	return (ft_pa(stack_a, stack_b), 0);
}