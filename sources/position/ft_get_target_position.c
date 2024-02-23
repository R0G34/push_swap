#include "push_swap.h"

void	ft_get_target_position(t_stack **a, t_stack **b)
{
	t_stack *aux_b;
	int		target_pos;

	aux_b = *b;
	ft_get_position(a);
	ft_get_position(b);
	target_pos = 0;
	while (aux_b)
	{
		target_pos = ft_get_target(a, aux_b->index, INT_MAX, target_pos);
		aux_b->target_pos = target_pos;
		aux_b = aux_b->next;
	}
}