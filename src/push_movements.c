#include "push_swap.h"

void	ft_sa(t_stack **lst_a, char *str)
{
  t_stack	*aux;

  if (!(*lst_a) || !(*lst_a)->next)
    return ;
  aux = (*lst_a);
  (*lst_a) = aux->next;
  aux->next = (*lst_a)->next;
  (*lst_a)->next = aux;
  ft_printf("%s", str);
}

void	ft_sb(t_stack **lst_b, char *str)
{
  t_stack	*aux;

  if (!(*lst_b) || !(*lst_b)->next)
    return ;
  aux = (*lst_b);
  (*lst_b) = aux->next;
  aux->next = (*lst_b)->next;
  (*lst_b)->next = aux;
  ft_printf("%s", str);
}

void	ft_ss(t_stack **lst_a, t_stack **lst_b, char *str)
{
  ft_sa(lst_a, "");
  ft_sb(lst_b, "");
  ft_printf("%s", str);
}

void	ft_pa(t_stack **lst_a, t_stack **lst_b, char *str)
{
  t_stack	*aux;

  if (!(*lst_b))
    return ;
  aux = (*lst_b)->next;
  (*lst_b)->next = (*lst_a);
  (*lst_a) = (*lst_b);
  (*lst_b) = aux;
  ft_printf("%s", str);
}

void	ft_pb(t_stack **lst_a, t_stack **lst_b, char *str)
{
  t_stack	*aux;

  if (!lst_a)
    return ;
  aux = (*lst_a)->next;
  (*lst_a)->next = (*lst_b);
  (*lst_b) = (*lst_a);
  (*lst_a) = aux;
  ft_printf("%s", str);
}
