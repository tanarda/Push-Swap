/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revRotate_funcs.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehtan <mehtan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 18:03:25 by mehtan            #+#    #+#             */
/*   Updated: 2023/02/03 18:03:27 by mehtan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rev_rotate(t_stack **st)
{
	t_stack	*indx;
	t_stack	*tmp;

	indx = (*st);
	while (indx->next->next != NULL)
	indx = indx->next;
	tmp = indx->next;
	tmp->next = (*st);
	indx->next = NULL;
	(*st) = tmp;
}

void	rra(t_stack **st_a)
{
	rev_rotate(st_a);
	write(1, "rra\n", 4);
}

void	rrb(t_stack **st_b)
{
	rev_rotate(st_b);
	write(1, "rrb\n", 4);
}

void	rrr(t_stack **st_a, t_stack **st_b)
{
	rev_rotate(st_a);
	rev_rotate(st_b);
	write(1, "rrr\n", 4);
}
