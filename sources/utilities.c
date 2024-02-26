#include "../includes/push_swap.h"

void	free_stack(t_stack **stack)
{
  t_stack	*tmp;

  if (!stack || !(*stack))
    return ;
  while (*stack)
  {
    tmp = (*stack)->next;
    free(*stack);
    *stack = tmp;
  }
  *stack = NULL;
}

void	exit_error(t_stack **stack_a, t_stack **stack_b)
{
  if (stack_a == NULL || *stack_a != NULL)
    free_stack(stack_a);
  if (stack_b == NULL || *stack_b != NULL)
    free_stack(stack_b);
  write(2, "Error\n", 6);
  exit (1);
}

long int	ft_atoi(const char *str)
{
  long int	nb;
  int			isneg;
  int			i;

  nb = 0;
  isneg = 1;
  i = 0;
  if (str[i] == '+')
    i++;
  else if (str[i] == '-')
  {
    isneg *= -1;
    i++;
  }
  while (is_digit(str[i]))
  {
    nb = (nb * 10) + (str[i] - '0');
    i++;
  }
  return (nb * isneg);
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

int	nb_abs(int nb)
{
  if (nb < 0)
    return (nb * -1);
  return (nb);
}

int	ft_strlen(const	char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(src);
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*result;
	int		ls1;
	int		ls2;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	ls1 = ft_strlen(s1);
	ls2 = ft_strlen(s2);
	result = (char *)malloc(sizeof(char) * ls1 + ls2 + 1);
	if (!result)
		return (NULL);
	while (ls1--)
	{
		result[i] = s1[i];
		i++;
	}
	ls1 = i;
	i = 0;
	while (ls2--)
		result[ls1++] = s2[i++];
	result[ls1] = '\0';
	return (result);
}

char	*ft_strdup(const char *str)
{
	size_t	len;
	char	*result;

	len = ft_strlen(str);
	result = malloc(sizeof(char) * (len + 1));
	if (result)
		ft_strlcpy(result, str, len + 1);
	return (result);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	if (start > (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	result = (char *)malloc(sizeof(char) * len + 1);
	if (!result)
		return (NULL);
	while (i < len)
	{
		result[i] = s[i + start];
		i++;
	}
	result[len] = '\0';
	return (result);
}

size_t	ft_sublen(const char *s, char c)
{
	size_t	res;

	res = 0;
	while (*s)
	{
		if (*s != c)
		{
			++res;
			while (*s && *s != c)
				++s;
		}
		else
			++s;
	}
	return (res);
}

char	**ft_split(const char *s, char c)
{
	char	**res;
	size_t	i;
	size_t	len;

	if (!s)
		return (NULL);
	i = 0;
	res = malloc(sizeof(char *) * (ft_sublen(s, c) + 1));
	if (!res)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				++s;
			res[i++] = ft_substr(s - len, 0, len);
		}
		else
			++s;
	}
	res[i] = 0;
	return (res);
}