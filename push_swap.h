/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehtan <mehtan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 18:00:24 by mehtan            #+#    #+#             */
/*   Updated: 2023/02/03 18:00:25 by mehtan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "./libft/libft.h"

typedef struct s_stack
{
	int				number;
	int				init_pos;
	int				real_pos;
	struct s_stack	*next;
}				t_stack;

char		*my_parse_args(char **av);
char		**my_organise_args(char *arr);
int			find_len(char **arr);
t_stack		**generate_stack(char **organized);
void		stack_add_front(t_stack **st, t_stack *new);
void		print_stack(t_stack **st);
void		free_stack(t_stack **stack);
int			is_sorted(t_stack **stack);
int			is_repeat(t_stack **st, char *av);
int			ft_issign(int c);
int			is_number(char *av);
int			is_num_in_range(char *av);
int			stack_size(t_stack **st);
void		my_radix(t_stack **st_a, t_stack **st_b);
void		radix_helper(t_stack **st_a, t_stack **st_b, int shift);
int			max_bit_calculator(int max_num);
//push functions
void		push(t_stack **st_reciever, t_stack **st_sender);
void		pa(t_stack **st_a, t_stack **st_b);
void		pb(t_stack **st_b, t_stack **st_a);
//swap functions
void		swap(t_stack **st);
void		sa(t_stack **st_a);
void		sb(t_stack **st_b);
void		ss(t_stack **st_a, t_stack **st_b);
//rotate functions
void		rotate(t_stack **st);
void		ra(t_stack **st_a);
void		rb(t_stack **st_b);
void		rr(t_stack **st_a, t_stack **st_b);
//reverse rotate
void		rev_rotate(t_stack **st);
void		rra(t_stack **st_a);
void		rrb(t_stack **st_b);
void		rrr(t_stack **st_a, t_stack **st_b);
//stack functions
t_stack		*new(int value);
t_stack		*get_stack_bottom(t_stack **st);
void		stack_add_bottom(t_stack **st, t_stack *new);
//utils
long int	ft_atoi(const char *str);
int			ft_isdigit(int c);
void		find_positions(t_stack **st, int nb);
void		assign_positions(int nums[], t_stack **st, int nb);
void		bubble_sort(int nums[], int nb);
int			is_empty(t_stack **st);
void		two_value(t_stack **st);
void		three_value(t_stack **st, int highest);
void		four_value(t_stack **st, t_stack **st_b, int highest);
void		five_value(t_stack **st, t_stack **st_b, int highest);
void		ft_exit(void);
#endif
