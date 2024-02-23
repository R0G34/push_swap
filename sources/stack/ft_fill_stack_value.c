#include "push_swap.h"

t_stack	*ft_fill_stack_values(int argc, char **argv)
{
	t_stack		*a;
	long int	nbr;
	int			i;

	a = NULL;
	nbr = 0;
	i = 1;
	while (i < argc)
	{
		nbr = ft_long_atoi(argv[i]);
		if (nbr > INT_MAX || nbr < INT_MIN)
			ft_exit_error(&a, NULL);
		if (i == 1)
			a = ft_new_stack((int)nbr);
		else
			ft_stack_add_bottom(&a, ft_new_stack((int)nbr));
		i++;
	}
	return (a);
}