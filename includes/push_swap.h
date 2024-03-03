#ifndef	PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>

typedef struct	s_stack
{
	int				value;
	int				position;
	struct s_stack	*next;
}				t_stack;

int			is_valid_arg(int argc, char **argv);
void		error_exit(int n);
t_stack		*fill_stack_values(int argc, char **argv);
int			ft_isdigit(int c);
char		**ft_split(const char *s, char c);
int			is_duplicated(t_stack *stack);
int			is_sorted(t_stack *stack);
int			is_valid_arg(int argc, char **argv);
int			sort_algorithm(t_stack **stack_a, t_stack **stack_b);
void		free_stack(t_stack **stack);
void		ft_putstr(char *str);
t_stack		*stack_second_last(t_stack *node);
t_stack		*stack_last(t_stack *node);
int			smallest(t_stack *node);
int			biggest(t_stack *node);
void		ft_rra(t_stack **stack);
void		ft_ra(t_stack **stack_a);
void		ft_sa(t_stack **stack_a);
int			size_stack(t_stack *stack);
int			small_sort(t_stack **stack_a);
int			sorting_four(t_stack **stack_a, t_stack **stack_b);
int			sorting_five(t_stack **stack_a, t_stack stack_b);
void		ft_pb(t_stack **stack_a, t_stack **stack_b);
void		ft_pa(t_stack **stack_a, t_stack **stack_b);
long long	long_atoi(char *str);
void		*free_splitted(char **splitted);

#endif