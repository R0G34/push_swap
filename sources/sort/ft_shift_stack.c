#include "push_swap.h"

static void	ft_shift_stack(t_stack **a)
{
	int	low_pos;
	int	size;

	size = ft_get_size_stack(*a);
	low_pos = ft_get_thelowest_position(a);
	if (low_pos > size / 2)
	{
		while (low_pos < size)
		{
			ft_do_rra(a);
			low_pos++;
		}
	}
	else
	{
		while (low_pos > 0)
		{
			ft_do_ra(a);
			low_pos--;
		}
	}
}