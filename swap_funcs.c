/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_funcs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehtan <mehtan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 18:11:19 by mehtan            #+#    #+#             */
/*   Updated: 2023/02/03 18:11:20 by mehtan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **st)
{
	t_stack	*tmp;

	if ((*st) != NULL && (*st)->next != NULL)
	{
		tmp = (*st)->next;
		(*st)->next = (*st)->next->next;
		tmp->next = (*st);
		(*st) = tmp;
	}
}

void	sa(t_stack **st_a)
{
	swap(st_a);
	write(1, "sa\n", 3);
}

void	sb(t_stack **st_b)
{
	swap(st_b);
	write(1, "sb\n", 3);
}

void	ss(t_stack **st_a, t_stack **st_b)
{
	swap(st_a);
	swap(st_b);
	write(1, "ss\n", 3);
}
