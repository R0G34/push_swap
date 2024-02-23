#include "push_swap.h"

static void	push(t_stack **src, t_stack **dest)
{
	t_stack *aux;

	if (*src == NULL)
		return ;
	aux = (*src)->next;
	(*src)->next = *dest;
	*dest = *src;
	*src = aux;
}