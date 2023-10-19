/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_funcs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehtan <mehtan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 17:54:17 by mehtan            #+#    #+#             */
/*   Updated: 2023/02/03 17:54:18 by mehtan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack **st_reciever, t_stack **st_sender)
{
	t_stack	*new_node;

	if (st_reciever != NULL && st_sender != NULL)
	{
		new_node = (*st_sender);
		(*st_sender) = (*st_sender)->next;
		new_node->next = (*st_reciever);
		(*st_reciever) = new_node;
	}
}

void	pa(t_stack **st_a, t_stack **st_b)
{
	push(st_a, st_b);
	write(1, "pa\n", 3);
}

void	pb(t_stack **st_b, t_stack **st_a)
{
	push(st_b, st_a);
	write(1, "pb\n", 3);
}
