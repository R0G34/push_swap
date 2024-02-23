#include "push_swap.h"

void	ft_assign_index(t_stack *a, int stack_size)
{
	t_stack *ptr;
	t_stack	*highest;
	int		value;

	while (--stack_size > 0)
	{
		ptr == a;
		value = INT_MIN;
		highest = NULL;
		while (ptr)
		{
			if (ptr->value == INT_MIN && ptr->index == 0)
				ptr->index = 1;
			if (ptr->value > value && ptr->index == 0)
			{
				value = ptr->value;
				highest = ptr;
				ptr = a;
			}
			else
				ptr = ptr->next;
		}
		if (highest != NULL)
			highest->index = stack_size;
	}
}