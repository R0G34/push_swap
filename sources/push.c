#include "../include/push_swap.h"

static void	ft_push(t_stack **src, t_stack **dst)
{
  t_stack	*aux;

  if (*src == NULL)
    return ;
  aux = (*src)->next;
  (*src)->next = *dst;
  *dst = *src;
  *src = aux;
}