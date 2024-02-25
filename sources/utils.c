#include "../include/push_swap.h"

int	ft_is_digit(char c)
{
  return (c >= '0' && c <= '9');
}

long int	ft_long_atoi(const char *str)
{
  long int	result;
  int		sign;
  int		i;

  result = 0;
  sign = 1;
  i = 0;
  if (str[i] == '+')
    i++;
  else if (str[i] == '-')
  {
    sign *= -1;
    i++;
  }
  while (ft_is_digit(str[i]))
  {
    result = result * 10 + str[i] - '0';
    i++;
  }
  return (result * sign);
}

int	ft_is_sign(char c)
{
  return (c == '+' || c == '-');
}

int	ft_str_cmp(const char *s1, const char *s2)
{
  int	i;
  int	j;

  i = 0;
  j = i;
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
  while (s1[i] != '\0' && s2[j] != '\0' && s1[i] == s2[j])
  {
    i++;
    j++;
  }
  return ((unsigned char)s1[i] - (unsigned char)s2[j]);
}

void	ft_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i])
  {
    write(1, &str[i], 1);
    i++;
  }
}

int	ft_is_nbr_abs(int nb)
{
  if (nb < 0)
    return (nb * -1);
  return (nb);
}