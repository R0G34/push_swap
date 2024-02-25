#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>

typedef struct s_stack
{
  int				value;
  int				index;
  int				position;
  int				target_pos;
  int				cost_a;
  int				cost_b;
  struct s_stack	*next;
}				t_stack;

t_stack 	*ft_adding_elem(int argv, char **argv);
void		ft_indexing(t_stack *a, int argc);

int			ft_is_sorted(t_stack *stack);
void		ft_small_sort(t_stack **stack);
void		ft_sort(t_stack **a, t_stack **b);

int			ft_lowest_index_pos(t_stack **stack);
void		ft_target_position(t_stack **a, t_stack **b);

void		ft_calc_cost(t_stack **a, t_stack **b);
void		ft_do_cheap_move(t_stack **a, t_stack **b);

void		ft_do_move(t_stack **a, t_stack **b, int cost_a, int cost_b);

void		ft_do_pa(t_stack **a, t_stack **b);
void		ft_do_pb(t_stack **a, t_stack **b);
void		ft_do_sa(t_stack **a);
void		ft_do_sb(t_stack **b);
void		ft_do_ss(t_stack **a, t_stack **b);
void		ft_do_ra(t_stack **a);
void		ft_do_rb(t_stack **b);
void		ft_do_rr(t_stack **a, t_stack **b);
void		ft_do_rrr(t_stack **a, t_stack **b);
void		ft_do_rra(t_stack **a);
void		ft_do_rrb(t_stack **b);

t_stack		*ft_get_last(t_stack *stack);
t_stack		*ft_get_second_last(t_stack *stack);
t_stack		*ft_new_stack(int value);
void	  	ft_add_elem_last(t_stack **stack, t_stack *new);
int		  	ft_size_stack(t_stack	*stack);

void		ft_free_stack(t_stack **stack);
long int	ft_long_atoi(const char *str);
void		ft_putstr(char *str);
int			ft_is_nbr_abs(int nb);

void	  	ft_exit(t_stack **a, t_stack **b);

int		  	ft_input_checker(char **argv);
int		  	ft_is_digit(char c);
int			ft_is_sign(char c);
int	  		ft_str_cmp(const char *s1, const char *s2);

#endif