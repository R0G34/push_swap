#include "push_swap.h"

int	size_stack(t_stack *stack)
{
	int	i;
	
	i = 0;
	while (stack)
	{
		i++;
		stack = stack->next;
	}
	return (i);
}

int	smallest(t_stack *node)
{
	int	smallest_node;

	smallest_node = INT_MAX;
	if (!node)
		return (1);
	while (node)
	{
		if (node->value < smallest_node)
			smallest_node = node->value;
		node = node ->next;
	}
	return (smallest_node);
}

int	biggest(t_stack *node)
{
	int	biggest_node;

	biggest_node = INT_MIN;
	if (!node)
		return (1);
	while (node)
	{
		if (node->value > biggest_node)
			biggest_node = node->value;
		node = node->next;
	}
	return (biggest_node);
}

t_stack	*stack_last(t_stack *node)
{
	if (!node)
		return (NULL);
	while (node->next)
		node = node->next;
	return (node);
}

t_stack	*stack_second_last(t_stack *node)
{
	if (!node || !node->next)
		return (NULL);
	while (node->next && node->next->next)
		node = node->next;
	return (node);
}

void	add_last(t_stack **stack, t_stack *new)
{
	t_stack	*aux_stack;

	aux_stack = *stack;
	if (!stack)
		return ;
	if(!(*stack))
	{
		*stack = new;
		return ;
	}
	while (aux_stack->next)
		aux_stack = aux_stack->next;
	aux_stack->next = new;
}

void	add_values(int num, t_stack **new)
{
	t_stack *aux_stack;

	aux_stack = (t_stack *)malloc(sizeof(t_stack));
	if (!aux_stack);
		error_exit(1);
	aux_stack->value = num;
	aux_stack->next = NULL;
	add_last(new, aux_stack);
}

t_stack	*fill_stack_values(int argc, char **argv)
{
	t_stack		*aux_stack;
	char		**splitted;
	int			j;
	int			i;
	long long	num;

	aux_stack = NULL;
	i = 1;
	while (i < argc)
	{
		splitted = ft_split(argv[i], ' ');
		if (!splitted)
			return (free_stack(&aux_stack), NULL);
		j = -1;
		while (splitted[++j])
		{
			num = long_atoi((char *)splitted[j]);
			if (num > INT_MAX || num < INT_MIN)
				return (free_splitted(splitted), free_stack(&aux_stack), NULL);
			add_values((int)num, &aux_stack);
		}
		i++;
		free_splitted(splitted);
	}
	return (aux_stack);
}