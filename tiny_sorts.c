/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tiny_sorts.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehtan <mehtan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 17:58:55 by mehtan            #+#    #+#             */
/*   Updated: 2023/02/03 17:58:56 by mehtan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	two_value(t_stack **st)
{
	if (!is_sorted(st))
		sa(st);
}

void	three_value(t_stack **st, int highest)
{
	if (is_sorted(st))
		return ;
	if ((*st)->real_pos == highest)
		ra(st);
	else if ((*st)->next->real_pos == highest)
		rra(st);
	if ((*st)->real_pos > (*st)->next->real_pos)
		sa(st);
}

void	four_value(t_stack **st, t_stack **st_b, int highest)
{
	if (is_sorted(st))
		return ;
	if ((*st)->next->real_pos == 0)
		ra(st);
	else if ((*st)->next->next->real_pos == 0)
	{
		ra(st);
		ra(st);
	}
	else if (get_stack_bottom(st)->real_pos == 0)
	{
		rra(st);
	}
	pb(st_b, st);
	three_value(st, highest);
	pa(st, st_b);
}

void	five_value(t_stack **st, t_stack **st_b, int highest)
{
	if (is_sorted(st))
		return ;
	if (get_stack_bottom(st)->real_pos == highest)
		rra(st);
	while ((*st)->real_pos != highest)
		ra(st);
	pb(st_b, st);
	four_value(st, st_b, highest - 1);
	pa(st, st_b);
	ra(st);
}
