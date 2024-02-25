#include "../include/push_swap.h"

void	ft_exit(t_stack **stack_a, t_stack **stack_b)
{
  if (stack_a == NULL || *stack_a != NULL)
    ft_free_stack(stack_a);
  if (stack_b == NULL || *stack_b != NULL)
    ft_free_stack(stack_b);
  write(2, "Error\n", 6);
  exit (1);
}