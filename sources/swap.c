#include "../include/push_swap.h"

static void	ft_swap(t_stack *stack)
{
	int	aux;

	if (stack == NULL || stack->next == NULL)
		return ;
	aux = stack->value;
	stack->value = stack->next->value;
	stack->next->value = aux;
	aux = stack->index;
	stack->index = stack->next->index;
	stack->next->index = aux;
}