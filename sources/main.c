#include "../include/push_swap.h"

static void	ft_push_swap(t_stack **a, t_stack **b, int size)
{
  if (size == 2 && !ft_is_sorted(*a))
    ft_do_sa(a);
  else if (size == 3)
    ft_small_sort(a);
  else if (size > 3 && !ft_is_sorted(*a))
    ft_sort(a, b);
}

int	main(int argc, char **argv)
{
  t_stack	*a;
  t_stack	*b;
  int		stack_size;

  if (argc < 2)
    return (0);
  if (!ft_input_checker(argv))
    ft_exit(NULL, NULL);
  b = NULL;
  a = ft_fill_stack_values(argc, argv);
  stack_size = ft_size_stack(a);
  ft_assign_index(a, stack_size + 1);
  ft_push_swap(&a, &b, stack_size);
  ft_free_stack(&a);
  ft_free_stack(&b);
  return (0);
}