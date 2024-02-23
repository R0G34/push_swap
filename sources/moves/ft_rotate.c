#include "push_swap.h"

static void	rotate(t_stack **stack)
{
	t_stack *tmp;
	t_stack *last;

	tmp = *stack;
	*stack = (*stack)->next;
	last = ft_stack_bottom(*stack);
	tmp->next = NULL;
	last->next = tmp;
}