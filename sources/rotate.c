#include "../include/push_swap.h"

static void	ft_rotate_both(t_stack **a, t_stack **b, 
                        int *cost_a, int *cost_b)
{
  while (*cost_a > 0 && *cost_b > 0)
  {
    (*cost_a)--;
    (*cost_b)--;
    ft_do_rr(a, b);
  }
}

static void	ft_rotate_a(t_stack **a, int *cost)
{
  while (*cost)
  {
    if (*cost > 0)
    {
    	ft_do_ra(a);
		(*cost)--;
    }
    else if (*cost < 0)
    {
		ft_do_rra(a);
		(*cost)++;
    }
  }
}

static void	ft_rotate_b(t_stack **b, int *cost)
{
  while (*cost)
  {
    if (*cost > 0)
    {
      ft_do_rb(b);
      (*cost)--;
    }
    else if (*cost < 0)
    {
      ft_do_rrb(b);
      (*cost)++;
    }
  }
}

static void	ft_rotate(t_stack **stack)
{
  t_stack	*tmp;
  t_stack	*tail;

  tmp = *stack;
  *stack = (*stack)->next;
  tail = ft_get_last(*stack);
  tmp->next = NULL;
  tail->next = tmp;
}