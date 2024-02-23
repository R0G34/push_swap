#include "push_swap.h"

t_stack	*ft_stack_bottom(t_stack *stack)
{
	while (stack && stack->next && stack->next->next != NULL)
		stack = stack->next;
	return (staack);
}