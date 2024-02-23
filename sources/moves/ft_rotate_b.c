#include "push_swap.h"

static void	ft_rotate_b(t_stack **b, int *cost)
{
	while (*cost)
	{
		if (*cost > 0)
		{
			ft_do_rb(b);
			(*cost)--;
		}
		else if (*cost < 0)
		{
			ft_do_rrb(b);
			(*cost)++;
		}
	}
}