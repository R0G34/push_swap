#include "../includes/push_swap.h"

int	len_limit(char *str, int limit)
{
	int	i;

	i = 0;
	if (!str)
		return (-1);
	while (str[i] != limit && str[i] != '\0')
		i++;
	return (i);
}

char	**ft_str_join_args(int ac, char **av)
{
	char	**splitted;
	char	*str;
	char	*aux;
	int		i;

	str = malloc(ft_strlen(av[1]));
	aux = ft_strlcpy(str, av[1], ft_strlen(av[1]));
	i = 2;
	while (i < ac)
	{
		aux = ft_strjoin(str, " ");
		free(str);
		str = ft_strjoin(aux, av[i++]);
		free (aux);
	}
	splitted = ft_split(str, ' ');
	free(str);
	return (splitted);
}

int	is_sorted(t_stack *stack)
{
	while (stack->next != NULL)
	{
		if (stack->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}

static void	push_swap(t_stack **stack_a, t_stack **stack_b, int stack_size)
{
	if (stack_size == 2 && !is_sorted(*stack_a))
		do_sa(stack_a);
	else if (stack_size == 3)
		tiny_sort(stack_a);
	else if (stack_size > 3 && !is_sorted(*stack_a))
		sort(stack_a, stack_b);
}

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		stack_size;
	char	**splitted;

	if (ac < 2)
		return (0);
	splitted = ft_str_join_args(ac, av);
	if (!is_correct_input(splitted))
		exit_error(NULL, NULL);

	stack_b = NULL;
	stack_a = fill_stack_values(ac, splitted);
	stack_size = get_stack_size(stack_a);
	assign_index(stack_a, stack_size + 1);
	push_swap(&stack_a, &stack_b, stack_size);
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}