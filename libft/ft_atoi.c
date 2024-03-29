/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abausa-v <abausa-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:17:15 by abausa-v          #+#    #+#             */
/*   Updated: 2024/03/06 19:17:17 by abausa-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 0;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		++i;
	}
	if (sign % 2 == 0)
		return (result);
	else
		return (-result);
}
/**
 * The function ft_atoi converts a string representation of an integer to an
 * actual integer value.
 * 
 * @param str The parameter `str` is a pointer to a character array, which
 * represents the string that we want to convert to an integer.
 * 
 * @return The function `ft_atoi` returns an integer value.
 */