#include "push_swap.h"

static void	ft_get_position(t_stack **stack)
{
	t_stack *aux;
	int		i;
	aux = *stack;
	i = 0;
	while (aux)
	{
		aux->position = i;
		aux = aux->next;
		i++;
	}
}