#include "../include/push_swap.h"

void	ft_do_pa(t_stack **a, t_stack **b)
{
	ft_push(b, a);
	ft_putstr("pa\n");
}

void	ft_do_pb(t_stack **a, t_stack **b)
{
	ft_push(a, b);
	ft_putstr("pb\n");
}

void	ft_do_sa(t_stack **a)
{
	ft_swap(*a);
	ft_putstr("sa\n");
}

void	ft_do_sb(t_stack **b)
{
	ft_swap(*b);
	ft_putstr("sb\n");
}

void	ft_do_ss(t_stack **a, t_stack **b)
{
	ft_swap(*a);
	ft_swap(*b);
	ft_putstr("ss\n");
}

void	ft_do_ra(t_stack **a)
{
	ft_rotate(a);
	ft_putstr("ra\n");
}

void	ft_do_rb(t_stack **b)
{
	ft_rotate(b);
	ft_putstr("rb\n");
}

void	ft_do_rr(t_stack **a, t_stack **b)
{
	ft_rotate(a);
	ft_rotate(b);
	ft_putstr("rr\n");
}

void	ft_do_rra(t_stack **a)
{
	ft_rev_rotate(a);
	ft_putstr("rra\n");
}

void	ft_do_rrb(t_stack **b)
{
	ft_rev_rotate(b);
  	ft_putstr("rrb\n");
}

void	ft_do_rrr(t_stack **a, t_stack **b)
{
 	 ft_rev_rotate(a);
 	 ft_rev_rotate(b);
 	 ft_putstr("rrr\n");
}