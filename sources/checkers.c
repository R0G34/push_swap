#include "../include/push_swap.h"

int	ft_is_sorted(t_stack *stack)
{
  while (stack->next != NULL)
  {
    if (stack->value > stack->next->value)
      return (0);
    stack = stack->next;
  }
  return (1);
}

static int	ft_is_arg_number(char *argv)
{
  int	i;

  i = 0;
  if (ft_is_sign(argv[i]) && argv[i + 1] != '\0')
    i++;
  while (argv[i] && ft_is_digit(argv[i]))
    i++;
  if (argv[i] != '\0' && !ft_is_digit(argv[i]))
    return (0);
  return (1);
}

static int	ft_is_duplicated(char **argv)
{
  int	i;
  int	j;

  i = 1;
  while (argv[i])
  {
    j = 1;
    while (argv[j])
    {
      if (j != i && ft_str_cmp(argv[i], argv[j]) == 0)
        return (1);
      j++;
    }
    i++;
  }
  return (0);
}

static int	ft_is_arg_zero(char *argv)
{
  int	i;

  i = 0;
  if (ft_is_sign(argv[i]))
    i++;
  while (argv[i] && argv[i] == '0')
    i++;
  if (argv[i] != '\0')
    return (0);
  return (1);
}

int	ft_input_checker(char **argv)
{
  int	i;
  int	zeros;

  zeros = 0;
  i = 1;
  while (argv[i])
  {
    if (!ft_is_arg_number(argv[i]))
      return (0);
    zeros += ft_is_arg_zero(argv[i]);
    i++;
  }
  if (zeros > 1)
    return (0);
  if (ft_is_duplicated(argv))
    return (0);
  return (1);
}