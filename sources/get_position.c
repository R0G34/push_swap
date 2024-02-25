#include "../include/push_swap.h"

static void	ft_get_position(t_stack **stack)
{
  t_stack	*aux;
  int		i;

  aux = *stack;
  i = 0;
  while (aux)
  {
    aux->pos = i;
    aux = aux->next;
    i++;
  }
}

int	ft_lowest_index_pos(t_stack **stack)
{
  t_stack	*aux;
  int		lowest_index;
  int		lowest_pos;

  aux = *stack;
  lowest_index = INT_MAX;
  ft_get_position(stack);
  lowest_pos = aux->pos;
  while (aux)
  {
    if (aux->index < lowest_index)
    {
      lowest_index = aux->index;
      lowest_pos = aux->pos;
    }
    aux = aux->next;
  }
  return (lowest_pos);
}

static int	ft_get_target(t_stack **a, int index_b,
                int target_idx, int target_pos)
{
  t_stack	*aux_a;

  aux_a = *a;
  while (aux_a)
  {
    if (aux_a->index > index_b && aux_a->index < target_idx)
    {
      target_idx = aux_a->index;
      target_pos = aux_a->pos;
    }
    aux_a = aux_a->next;
  }
  if (target_idx != INT_MAX)
    return (target_pos);
  aux_a = *a;
  while (aux_a)
  {
    if (aux_a->index < target_idx)
    {
      target_idx = aux_a->index;
      target_pos = aux_a->pos;
    }
    aux_a = aux_a->next;
  }
  return (target_pos);
}

void	ft_target_position(t_stack **a, t_stack **b)
{
  t_stack	*aux_b;
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