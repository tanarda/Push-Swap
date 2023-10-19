/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehtan <mehtan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 17:30:20 by mehtan            #+#    #+#             */
/*   Updated: 2023/02/03 17:30:23 by mehtan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack **stack)
{
	t_stack	*st;

	st = (*stack);
	while (st != NULL && st->next != NULL)
	{
		if (st->number > st->next->number)
			return (0);
		st = st->next;
	}
	return (1);
}

int	is_repeat(t_stack **st, char *av)
{
	t_stack	*tmp;

	tmp = (*st);
	while (tmp != NULL)
	{
		if (tmp->number == (int)ft_atoi(av))
			return (1);
		tmp = tmp->next;
	}
	return (0);
}

int	is_number(char *av)
{
	int	i;

	i = 0;
	if (ft_issign(av[i]))
		i++;
	while (av[i] != '\0')
	{
		if (!ft_isdigit(av[i]))
			return (0);
		else
			i++;
	}
	return (1);
}

int	is_num_in_range(char *av)
{
	long int	nb;

	nb = 0;
	if (is_number(av))
		nb = ft_atoi(av);
	if (nb >= 2147483647 || nb <= -2147483648)
		return (0);
	else
		return (1);
}

int	is_empty(t_stack **st)
{
	if ((*st) == NULL)
	{
		return (0);
	}
	return (1);
}
