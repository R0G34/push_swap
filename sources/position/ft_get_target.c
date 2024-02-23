#include "push_swap.h"

static int	ft_get_target(t_stack **a, int index_b, int index_target, int target_pos)
{
	t_stack *aux_a;
	aux_a = *a;
	while (aux_a)
	{
		if (aux_a->index > index_b && aux_a->index < index_target)
		{
			index_target = aux_a->index;
			target_pos = aux_a->position;
		}
		aux_a = aux_a->next;
	}
	if (index_target != INT_MAX)
		return (target_pos);
	aux_a = *a;
	while (aux_a)
	{
		if (aux_a->index < index_target)
		{
			index_target = aux_a->index;
			target_pos = aux_a->position;
		}
		aux_a = aux_a->next;
	}

	return (target_pos);
}