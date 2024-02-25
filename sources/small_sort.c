#include "../include/push_swap.h"

static int	ft_find_high_index(t_stack *stack)
{
  int		index;

  index = stack->index;
  while (stack)
  {
    if (stack->index > index)
      index = stack->index;
    stack = stack->next;
  }
  return (index);
}

void	ft_small_sort(t_stack **stack)
{
	int	high;

	if (ft_is_sorted(*stack))
		return ;
	high = ft_find_high_index(*stack);
	if ((*stack)->index == high)
    	ft_do_ra(stack);
	else if ((*stack)->next->index == high)
		ft_do_rra(stack);
	if ((*stack)->index > (*stack)->next->index)
		ft_do_sa(stack);
}