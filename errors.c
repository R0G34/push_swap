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

int	ft_ismax(char **str)
{
	for (int j = 0; str[j] != '\0'; j++)
	{
		for (int i = 0; str[j][i] != '\0'; i++)
		{
			
}
