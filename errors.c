/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abausa-v <abausa-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:08:11 by abausa-v          #+#    #+#             */
/*   Updated: 2024/01/25 17:37:31 by abausa-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	ft_isnumber(char **str)
{
	for (int j = 0; str[j] != '\0'; j++)
		{
			for (int i = 0; str[j][i] != '\0'; i++)
			{
				if (ft_isdigit(str[j][i]) != 1)
				{
					printf("ERROR\n");
					free(str[i]);
					exit (0);
				}
			}
		}
	return (1);
}

int ft_atoi_mid(const char *str) 
{
    int i = 0;
    int sign = 1;

    if (str[i] == '+' || str[i] == '-') 
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }

    if (!ft_isdigit(str[i]))
        return 0;

    long long num = 0;
    while (ft_isdigit(str[i])) 
    {
        num = num * 10 + (str[i] - '0');
        if ((sign == 1 && num > INT_MAX) || (sign == -1 && num > -(long long)INT_MIN))
            return 0;
        i++;
    }

    if (str[i] != '\0')
        return 0;

    return 1;
}
