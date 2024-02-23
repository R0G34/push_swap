#include "push_swap.h"

int	ft_is_nbr_abs(int nbr)
{
	if (nbr < 0)
		return (nbr * -1);
	return (nbr);
}