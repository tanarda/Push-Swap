/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_funcs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehtan <mehtan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 18:07:30 by mehtan            #+#    #+#             */
/*   Updated: 2023/02/03 18:07:31 by mehtan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*get_stack_bottom(t_stack **st)
{
	t_stack	*tmp;

	tmp = (*st);
	while (tmp && tmp->next != NULL)
		tmp = tmp->next;
	return (tmp);
}

t_stack	*new(int value)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->number = value;
	new->next = NULL;
	return (new);
}

void	stack_add_bottom(t_stack **st, t_stack *new)
{
	t_stack	*tail;

	if (!new)
	{
		return ;
	}
	if (!*st)
	{
		(*st) = new;
		return ;
	}
	tail = get_stack_bottom(st);
	tail->next = new;
}

void	stack_add_front(t_stack **st, t_stack *new)
{
	if (!new)
	{
		return ;
	}
	if (!*st)
	{
		(*st) = new;
		return ;
	}
	new->next = (*st);
	(*st) = new;
}

int	stack_size(t_stack **st)
{
	t_stack	*tmp;
	int		i;

	tmp = (*st);
	i = 0;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
