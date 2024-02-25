#include "../include/push_swap.h"

static void	ft_push_minus_three(t_stack **a, t_stack **b)
{
    int size;
    int   pushed;
    int   i;

    size = ft_size_stack(*a);
    pushed = 0;
    i = 0;
    while (size > 6 && i < size && pushed < size / 2)
    {
        if ((*a)->index <= size / 2)
        {
            ft_do_pb(a, b);
            pushed++;
        }
        else
            ft_do_ra(a);
        i++;
    }
    while (size - pushed > 3)
    {
        ft_do_pb(a, b);
        pushed++;
    }
}

static void	ft_move_stack(t_stack **a)
{
  int	lowest_pos;
  int	size;

  size = ft_size_stack(*a);
  lowest_pos = ft_get_lowest_index_pos(a);
  if (lowest_pos > size / 2)
  {
    while (lowest_pos < size)
    {
      ft_do_rra(a);
      lowest_pos++;
    }
  }
  else
  {
    while (lowest_pos > 0)
    {
      ft_do_ra(a);
      lowest_pos--;
    }
  }
}

void	ft_sort(t_stack **a, t_stack **b)
{
  ft_push_minus_three(a, b);
  ft_small_sort(a);
  while (*b)
  {
    ft_get_target_position(a, b);
    ft_calc_cost(a, b);
    ft_do_cheap_move(a, b);
  }
  if (!ft_is_sorted(*a))
    ft_move_stack(a);
}