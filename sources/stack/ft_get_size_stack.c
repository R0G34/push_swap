#include "push_swap.h"

int	size_stack(t_stack *stack)
{
	size_t	size;

	size = 0;
	if (!stack)
		return (0);
	while (stack)
	{
		stack = stack->next;
		size++;
	}
	return (size);
}