#include "push_swap.h"

void	exit_error(t_stack **a, t_stack **b)
{
	if (a == NULL || *a != NULL)
		ft_free_stack(a);
	if (b == NULL || *b != NULL)
		ft_free_stack(b);
	ft_printf("ERROR\n");
	exit(1);
}