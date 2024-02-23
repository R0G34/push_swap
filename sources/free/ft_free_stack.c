#include "push_swap.h"

void	ft_free_stack(t_stack **stack)
{
	t_stack *aux;

	if (!stack || !(*stack))
		return ;
	while (*stack)
	{
		aux = (*stack)->next;
		free(*stack);
		*stack = aux;
	}
	*stack = NULL;
}