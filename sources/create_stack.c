#include "../include/push_swap.h"

t_stack	*ft_adding_elem(int argc, char **argv)
{
  t_stack   *a;
  long int	content;
  int			  i;

  a = NULL;
  content = 0;
  i = 1;
  while (i < argc)
  {
    content = ft_long_atoi(av[i]);
    if (content > INT_MAX || content < INT_MIN)
      ft_exit(&a, NULL);
    if (i == 1)
      a = ft_new_stack((int)content);
    else
      ft_add_bottom(&a, ft_new_stack((int)content));
    i++;
  }
  return (a);
}

void	ft_indexing(t_stack *a, int size)
{
  t_stack	*ptr;
  t_stack	*highest;
  int		  value;

  while (--size > 0)
  {
    ptr = a;
    value = INT_MIN;
    highest = NULL;
    while (ptr)
    {
      if (ptr->value == INT_MIN && ptr->index == 0)
        ptr->index = 1;
      if (ptr->value > value && ptr->index == 0)
      {
        value = ptr->value;
        highest = ptr;
        ptr = a;
      }
      else
        ptr = ptr->next;
    }
    if (highest != NULL)
      highest->index = size;
  }
}