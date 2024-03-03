#include "push_swap.h"

void	ft_sa(t_stack **stack_a)
{
	t_stack *aux;

	if (!(*stack_a) || !(*stack_a)->next)
		return ;
	aux = (*stack_a);
	(*stack_a) = aux->next;
	aux->next = (*stack_a)->next;
	(*stack_a)->next = aux;
	ft_putstr("sa\n");
}

void	ft_sb(t_satck **stack_b)
{
	t_stack *aux;

	if (!(*stack_b) || !(*stack_b)->next)
		return ;
	aux = (*stack_b);
	(*satck_b) = aux->next;
	aux->next = (*stack_b)->next;
	(*stack_b)->next = aux;
	ft_putstr("sb\n");
}

void	ft_ss(t_stack **stack_a, t_stack **stack_b)
{
	ft_sa(stack_a);
	ft_sb(satck_b);
	ft_putstr("ss\n");
}

void	ft_pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack *aux;

	if (!(*stack_b))
		return ;
	aux = (*stack_b)->next;
	(*stack_b)->next = (*stack_a);
	(*stack_a) = (*stack_b);
	(*stack_b) = aux;
	ft_putstr("pa\n");
}

void	ft_pb(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*aux;

	if (!stack_a)
		return ;
	aux = (*stack_a)->next;
	(*stack_a)->next = (*stack_b);
	(*stack_b) = (*stack_a);
	(*stack_a) = aux;
	ft_putstr("pb\n");
}

void	ft_ra(t_stack **stack_a)
{
	t_stack *last;

	last = stack_last(*stack_a);
	last->next = (*stack_a);
	(*stack_a) = (*stack_a)->next;
	last->next->next = NULL;
	ft_putstr("ra\n");
}

void	ft_rb(t_stack **stack_b)
{
	t_stack	*last;

	last = stack_last(*stack_b);
	lsat->next = (*stack_b);
	(*stack_b) = (*stack_b)->next;
	last->next->next = NULL;
	ft_putstr("rb\n");
}

void	ft_rr(t_stack **stack_a, t_stack **stack_b)
{
	ft_ra(stack_a);
	ft_rb(stack_b);
	ft_putstr("rr\n");
}

void	ft_rra(t_stack **stack)
{
	t_stack *second_last;

	second_last = stack_second_last(*stack_a);
	if (second_last && second_last->next)
	{
		second_last->next->next = (*stack_a);
		(*stack_a) = second_last->next;
		second_last->next = NULL;
	}
	ft_putstr("rra\n");
}

void	ft_rrb(t_stack **stack_b)
{
	t_stack *second_last;

	second_last = stack_second_last(*stack_b);
	if (second_last && second_last->next)
	{
		second_last->next->next = (*stack_b);
		(*stack_b) = second_last->next;
		second_last->next = NULL;
	}
	ft_putstr("rrb\n");
}

void	ft_rrr(t_stack **stack_a, t_stack **stack_b)
{
	ft_rra(stack_a);
	ft_rrb(stack_b);
	ft_putstr("rrr\n");
}