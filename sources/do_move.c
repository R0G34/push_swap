#include "../include/push_swap.h"

void	ft_do_move(t_stack **a, t_stack **b, int cost_a, int cost_b)
{
  if (cost_a < 0 && cost_b < 0)
    ft_both_rev_rotate(a, b, &cost_a, &cost_b);
  else if (cost_a > 0 && cost_b > 0)
    ft_rotate_both(a, b, &cost_a, &cost_b);
  ft_rotate_a(a, &cost_a);
  ft_rotate_b(b, &cost_b);
  ft_do_pa(a, b);
}