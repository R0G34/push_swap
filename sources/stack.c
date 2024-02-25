#include "../include/push_swap.h"

t_stack	*ft_get_last(t_stack *stack)
{
  while (stack && stack->next != NULL)
    stack = stack->next;
  return (stack);
}

t_stack	*ft_get_second_last(t_stack *stack)
{
  while (stack && stack->next && stack->next->next != NULL)
    stack = stack->next;
  return (stack);
}

t_stack	*ft_new_stack(int value)
{
  t_stack	*new;

  new = malloc(sizeof * new);
  if (!new)
    return (NULL);
  new->value = value;
  new->index = 0;
  new->position = -1;
  new->target_pos = -1;
  new->cost_a = -1;
  new->cost_b = -1;
  new->next = NULL;
  return (new);
}

void	ft_add_elem_last(t_stack **stack, t_stack *new)
{
  t_stack	*tail;

  if (!new)
    return ;
  if (!*stack)
  {
    *stack = new;
    return ;
  }
  tail = ft_get_last(*stack);
  tail->next = new;
}

int	ft_size_stack(t_stack	*stack)
{
  int	size;

  size = 0;
  if (!stack)
    return (0);
  while (stack)
  {
    stack = stack->next;
    size++;
  }
  return (size);
}