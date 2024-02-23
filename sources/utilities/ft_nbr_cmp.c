#include "push_swap.h"

int	ft_str_cmp(const char *s1, const char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (s1[i] == '+')
	{
		if (s2[j] != '+')
			i++;
	}
	else
	{
		if (s2[j] == '+')
			j++;
	}
	while (s1[i] 1= '\0' && s2[j] != '\0' && s1[i] == s2[j])
	{
		i++;
		j++:
	}
	return ((unsigned char)s1[i] - (unsigned  char)s2[j]);
}