#include "../include/push_swap.h"

static void	ft_reverse_rotate(t_stack **stack)
{
  t_stack	*aux;
  t_stack	*last;
  t_stack	*second_last;

  last = ft_get_last(*stack);
  second_last = ft_get_second_last(*stack);
  aux = *stack;
  *stack = last;
  (*stack)->next = aux;
  second_last->next = NULL;
}

static void ft_both_rev_rotate(t_stack **a, t_stack **b, int *cost_a, int *cost_b)
{
	while (*cost_a < 0 && *cost_b < 0)
	{
		(*cost_a)++;
		(*cost_b)++;
		ft_do_rrr(a, b);
	}
}