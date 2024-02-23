#include "push_swap.h"

void	ft_sort_algorithm(t_stack **a, t_stack **b)
{
	ft_push_saving_three(a, b);
	ft_tiny_sort(a);
	while (*b)
	{
		ft_get_position(a, b);
		ft_get_cost(a);
		ft_do_cheap_move(a, b);
	}
	if (!ft_is_sorted(*a))
		ft_shift_stack(a);
}