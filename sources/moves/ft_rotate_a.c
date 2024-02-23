#include "push_swap.h"

static void	ft_rotate_a(t_stack **a, int *cost)
{
	while (*cost)
	{
		if (*cost > 0)
		{
			ft_do_ra(a);
			(*cost)--;
		}
		else if (*cost < 0)
		{
			ft_do_rra(a);
			(*cost)++;
		}
	}
}