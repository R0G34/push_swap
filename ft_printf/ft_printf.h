/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abausa-v <abausa-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 10:46:00 by abausa-v          #+#    #+#             */
/*   Updated: 2023/12/15 12:37:34 by abausa-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include "Libft/libft.h"

# ifndef HEXL
#  define HEXL "0123456789abcdef"
# endif

# ifndef HEXU
#  define HEXU "0123456789ABCDEF"
# endif

int		ft_printf(const char *str, ...);
void	ft_conver(char type, int *count, va_list *args);
int		ft_putchars(char c);
int		ft_putptr(unsigned long n);
int		ft_putstr(char *str);
int		ft_putint(int n);
int		ft_printf_u(unsigned int n);
int		ft_printf_hexl(unsigned long n);
int		ft_printf_hexu(unsigned long n);

#endif
