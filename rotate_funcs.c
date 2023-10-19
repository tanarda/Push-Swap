/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_funcs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehtan <mehtan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 18:06:07 by mehtan            #+#    #+#             */
/*   Updated: 2023/02/03 18:06:08 by mehtan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack **st)
{
	t_stack	*indx;
	t_stack	*tmp;

	tmp = (*st)->next;
	indx = (*st);
	while (indx->next != NULL)
	indx = indx->next;
	indx->next = (*st);
	(*st)->next = NULL;
	(*st) = tmp;
}

void	ra(t_stack **st_a)
{
	rotate(st_a);
	write(1, "ra\n", 3);
}

void	rb(t_stack **st_b)
{
	rotate(st_b);
	write(1, "rb\n", 3);
}

void	rr(t_stack **st_a, t_stack **st_b)
{
	rotate(st_a);
	rotate(st_b);
	write(1, "rr\n", 3);
}
