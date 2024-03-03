#include "push_swap.h"

int	is_valid_arg(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while ((argv[i][j]) && (ft_isdigit(argv[i][j])
				|| (argv[i][j] == ' ')
				|| (argv[i][j] == '-' && ft_isdigit(argv[i][j + 1])
				&& !ft_isdigit(argv[i][j + 1]))
				|| (argv[i][j] == '+' && ft_isdigit(argv[i][j + 1])
				&& !ft_isdigit(argv[i][j - 1]))))
				i++;
		if (argv[i][j] && !ft_isdigit(argv[i][j]))
				return (1);
		i++;
	}
	return (0);
}

int	is_sorted(t_stack *stack)
{
	while (stack && stack->next)
	{
		if (stack->value < stack->next->value)
			stack = stack->next;
		else
			return (0);
	}
	return (1);
}

int	is_duplicated(t_stack *stack)
{
	t_stack	*i;
	t_stack	*j;
	int		flag;

	i = stack;
	while (i != NULL)
	{
		flag = i->value;
		j = i->next;
		while (j != NULL)
		{
			if (j->value == flag)
				return (1);
			j = j->next;
		}
		i = i->next;
	}
	return (0);
}