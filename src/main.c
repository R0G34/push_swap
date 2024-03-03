#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc > 1 && argv[1])
	{
		if (is_valid_arg(argc, argv) != 0)
			error_exit(1);
		else
		{
			stack_a = fill_stack_values(argc, argv);
			if (stack_a == NULL)
				error_exit(1);
		}
		if (is_sorted(stack_a) != 0)
			return (0);
		if (is_duplicated(stack_a) == 0 && is_sorted(stack_a) == 0)
			sort_algorithm(&stack_a, &stack_b);
		else
			error_exit(1);
	}
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}