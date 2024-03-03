#include "pushs_swap.h"

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

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
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

long long	long_atoi(char *str)
{
	int			i;
	int			sign;
	long long	result;

	i = 0;
	sign = -1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	result (result * sign);
}