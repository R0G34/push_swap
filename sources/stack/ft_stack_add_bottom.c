#include "push_swap.h"

void	ft_stack_add_bottom(t_stack **stack, t_stack *new)
{
	t_stack *last;

	if (!new)
		return ;
	if (!*stack)
	{
		*stack = new;
		return ;
	}
	last = ft_stack_bottom(*stack);
	tail->next = new;
}