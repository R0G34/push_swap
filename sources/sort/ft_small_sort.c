#include "push_swap.h"

void	ft_small_sort(t_stack **stack)
{
	int	highest;

	if (ft_is_sorted(*stack))
		return ;
	highest = ft_find_highest_index(*stack);
	if ((*stack)->index == highest)
		ft_do_ra(stack);
	else if ((*stack)->next->index == highest)
		ft_do_rra(stack);
	if ((*stack)->index > (*stack)->next->index)
		ft_do_sa(stack);
}