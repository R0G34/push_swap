/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abausa-v <abausa-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 10:10:06 by abausa-v          #+#    #+#             */
/*   Updated: 2024/02/23 14:16:13 by abausa-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>
# include <stdbool.h>

typedef struct s_stack
{
	int				value;
	int				index;
	int				position;
	int				target;
	int				cost_a;
	int				cost_b;
	struct s_stack	*next;
}	t_stack;

/* checkers */

static int	ft_duplicate_checker(char **argv);
static int	ft_is_arg_nbr(char *argv);
static int	arg_is_zero(char *argv);
int	ft_is_correct_input(char **argv);
int	ft_is_digit(char c);
int	ft_is_digit(char c);
int	ft_is_sorted(t_stack *stack);

/* cost */

void	ft_get_cost(t_stack **a, t_stack **b);

/* errors */

void	ft_exit_error(t_stack **a, t_stack **b);

/* free */

void	ft_free_stack(t_stack **stack);

/* make and print move*/

void	ft_do_pa(t_stack **a, t_stack **b);
void	ft_do_pb(t_stack **a, t_stack **b);
void	ft_do_sa(t_stack **a);
void	ft_do_sb(t_stack **b);
void	ft_do_ss(t_stack **a, t_stack **b);
void	ft_do_ra(t_stack **a);
void	ft_do_rb(t_stack **b);
void	ft_do_rr(t_stack **a, t_stack **b);
void	ft_do_rra(t_stack **a);
void	ft_do_rrb(t_stack **b);
void	ft_do_rrr(t_stack **a, t_stack **b);

/*  moves */

void	ft_do_cheap_move(t_stack **a, t_stack **b);
static void	push(t_stack **src, t_stack **dest);
static void	ft_rev_rotate_both(t_stack **a, t_stack **b, int *cost_a, int *cost_b);
static void	ft_rev_rotate(t_stack **stack);
static void	ft_rotate_a(t_stack **a, int *cost);
static void	ft_rotate_b(t_stack **b, int *cost);
static void	ft_rotate_both(t_stack **a, t_stack **b, int *cost_a, int *cost_b);
static void	rotate(t_stack **stack);
static void	ft_swap(t_stack *stack);
void		ft_which_move(t_stack **a, t_stack **b, int cost_a, int cost_b);

/* position */

static void	ft_get_position(t_stack **stack);
void		ft_get_target_position(t_stack **a, t_stack **b);
static int	ft_get_target(t_stack **a, int index_b, int index_target, int target_pos);
int			ft_get_thelowest_position(t_stack **stack);

/* sort */

static void	ft_push_swap(t_stack **a, t_stack **b, int size);
static int	ft_find_highest_index(t_stack *stack);
static void	ft_push_saving_three(t_stack **a, t_stack **b);
static void	ft_shift_stack(t_stack **a);
void		ft_small_sort(t_stack **stack);
void		ft_sort_algorithm(t_stack **a, t_stack **b);

/* stack */

void		ft_assign_index(t_stack *a, int stack_size);
t_stack		*ft_fill_stack_values(int argc, char **argv);
int			ft_get_size_stack(t_stack *stack);
t_stack		*ft_new_stack(int value);
void		ft_stack_add_bottom(t_stack **stack, t_stack *new);
t_stack		*ft_stack_bottom(t_stack *stack);
t_stack		*ft_stack_bottom(t_stack *stack);

/* utilities */

int			ft_is_nbr_abs(int nbr);
long int	ft_long_atoi(const char *str);
int			ft_str_cmp(const char *s1, const char *s2);
void		ft_putstr(char *str);

#endif