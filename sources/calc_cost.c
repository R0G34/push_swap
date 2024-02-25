#include "../include/push_swap.h"

void	ft_calc_cost(t_stack **a, t_stack **b)
{
  t_stack	*aux_a;
  t_stack	*aux_b;
  int		size_a;
  int		size_b;

  aux_a = *a;
  aux_b = *b;
  size_a = ft_size_stack(aux_a);
  size_b = ft_size_stack(aux_b);
  while (aux_b)
  {
    aux_b->cost_b = aux_b->pos;
    if (aux_b->pos > size_b / 2)
      aux_b->cost_b = (size_b - aux_b->pos) * -1;
    aux_b->cost_a = aux_b->target_pos;
    if (aux_b->target_pos > size_a / 2)
      aux_b->cost_a = (size_a - aux_b->target_pos) * -1;
    aux_b = aux_b->next;
  }
}