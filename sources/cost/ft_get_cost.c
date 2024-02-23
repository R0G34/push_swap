#include "push_swap.h"

void	ft_get_cost(t_stack **a, t_stack **b)
{
	t_stack *a_aux;
	t_stack	*b_aux;
	int		size_a;
	int		size_b;

	a_aux = *a;
	b_aux = *b;
	size_a = ft_get_size_stack(a_aux);
	size_b = ft_get_size_stack(b_aux);
	while (b_aux)
	{
		b_aux->cost_b = b_aux->position;
		if (b_aux->position > size_b / 2)
			b_aux->cost_b = (size_b - b_aux->pos) * -1;
		b_aux->cost_a = b_aux->target;
		if (b_aux->target > size_a / 2)
			b_aux->cost_a = (size_a - b_aux->target) * -1;
		b_aux = b_aux->next;
	}
}