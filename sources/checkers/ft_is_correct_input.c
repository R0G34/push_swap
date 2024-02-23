#include "push_swap.h"

int	ft_is_correct_input(char **argv)
{
	int	i;
	int	zeros;

	zeros = 0;
	i = 1;
	while (argv[i])
	{
		if (!ft_is_arg_nbr(argv[i]))
			return (0);
		zeros += ft_is_arg_zero(argv[i]);
		i++;
	}
	if (zeros > 1)
		return (0);
	if (ft_duplicate_checker(argv))
		return (0);
	return (1);
}