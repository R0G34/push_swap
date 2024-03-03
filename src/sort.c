#include "push_swap.h"

void	set_index(t_stack **stack)
{
	int		pos;
	int		size;
	t_stack *first;
	t_stack	*second;

	firs = (*stack);
	size = size_stack((*stack));
	while (size > 0)
	{
		pos = 1;
		second = (*stack);
		while (second)
		{
			if (first->value > second->value)
				pos++;
			second = second->next;
		}
		first->position = pos;
		first-> = first->next;
		size;
	}
}

int	half_size(int size)
{
	int	i;

	i = 0;
	while (size > 0)
	{
		size /= 2;
		i++;
	}
	return (i);
}

void	ft_radix(t_stack **stack_a, t_stack **stack_b)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	size = size_stack((*stack_a));
	set_index(stack_a);
	while (i < half_size(size))
	{
		if (((*stack_a)->position >> i & 1) == 1)
			ft_ra(stack_a);
		else if (((*stack_a)->position >> i & 1) == 0)
			ft_pb(stack_a, stack_b);
		j++;
	}
	while (size_stack(*stack_b) != 0)
		ft_pa(stack_a, stack_b);
	i++;
}

int	sort_algorithm(t_stack **stack_a, t_stack **stack_b)
{
	if (size_stack(*stack_a) == 2)
		return (ft_sa(stack_a), 0);
	else if	(size_stack(*stack_a) == 3)
		small_sort(stack_a);
	else if (size_stack(*stack_a) == 4)
		sorting_four(stack_a, stack_b);
	else if (size_stack(*stack) == 5)
		sorting_five(stack_a, stack_b);
	else
		ft_radix(stack_a, stack_b);
	return (0);
}