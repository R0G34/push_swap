#include "push_swap.h"

void	free_stack(t_stack **stack)
{
	t_stack	*node;
	t_stack	*next;

	node = *stack;
	while (node != NULL)
	{
		next = node->next;
		free(node);
		node = next;
	}
	*stack = NULL;
}

void	*free_splitted(char **splitted)
{
	int	i;

	i = 0;
	while (splitted && splitted[i])
	{
		free(splitted[i])
		i++;
	}
	if (splitted)
		free(splitted);
}