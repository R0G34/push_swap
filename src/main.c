#include "../includes/push_swap.h"

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

char	*ft_strndup(const char *s, size_t n)
{
	size_t	len;
	char	*dup;

	for (len = 0; len < n && s[len]; len++)
		;

	dup = (char *)malloc((len + 1) * sizeof(char));
	if (!dup)
		return (NULL);

	for (size_t i = 0; i < len; i++)
		dup[i] = s[i];

	dup[len] = '\0';

	return (dup);
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

void process_input_tokens(char **tokens, t_stack **stack_a, int ac, char **av)
{
    int i = 0;
    while (tokens[i])
    {
        char *token = tokens[i];
        if (token[0] == '\"')
            token++;

        char *end = token + ft_strlen(token) - 1;
        if (*end == '\"')
            *end = '\0';

        char **subtokens = ft_split(token, ' ');
        int j = 0;
        while (subtokens[j]) {
            int num = atoi(subtokens[j]);
            stack_add_bottom(stack_a, stack_new(num));
            free(subtokens[j]);
            j++;
        }
        free(subtokens);

        if (ac == 2 && av[1][0] == '\"') {
            free(tokens[i]);
        }
        i++;
    }
}

int main(int ac, char **av)
{
    t_stack *stack_a;
    t_stack *stack_b;
    int stack_size;

    if (ac < 2)
    {
        ft_putstr("Error: No arguments provided.\n");
        return (1);
    }

    if (!is_correct_input(av))
    {
        ft_putstr("Error: Invalid input format.\n");
        return (1);
    }

    char **tokens;
    if (ac == 2 && av[1][0] == '\"')
    {
        tokens = ft_split(&av[1][1], '\"'); // Dividir la cadena en tokens usando "
    }
    else
    {
        tokens = av + 1; // Usar los argumentos directamente
    }

    stack_b = NULL;
    stack_a = NULL;

    process_input_tokens(tokens, &stack_a, ac, av);

    if (ac == 2 && av[1][0] == '\"')
    {
        free(tokens); // Liberar la memoria asignada al array de tokens
    }

    stack_size = get_stack_size(stack_a);
    assign_index(stack_a, stack_size + 1);
    push_swap(&stack_a, &stack_b, stack_size);
    free_stack(&stack_a);
    free_stack(&stack_b);
    return (0);
}