/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehtan <mehtan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 17:57:04 by mehtan            #+#    #+#             */
/*   Updated: 2023/02/03 17:57:05 by mehtan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	max_bit_calculator(int max_num)
{
	int	maximum_bit;

	maximum_bit = 0;
	while ((max_num >> maximum_bit) != 0)
		maximum_bit++;
	return (maximum_bit);
}

void	radix_helper(t_stack **st_a, t_stack **st_b, int shift)
{
	int	size;
	int	i;
	int	a;

	i = 0;
	size = stack_size(st_a);
	a = 0;
	while (a < size)
	{
		if (is_sorted(st_a))
			return ;
		i = (*st_a)->real_pos;
		if (((i >> shift) & 1) == 1)
			ra(st_a);
		else
			pb(st_b, st_a);
		a++;
	}
}

void	my_radix(t_stack **st_a, t_stack **st_b)
{
	int	i;
	int	shift;
	int	maximum_bit;
	int	max_num;
	int	size;

	size = stack_size(st_a);
	max_num = stack_size(st_a) - 1;
	maximum_bit = max_bit_calculator(max_num);
	i = 0;
	shift = 0;
	while (shift < maximum_bit)
	{
		radix_helper(st_a, st_b, shift);
		while ((*st_b) != NULL)
		{
			if ((*st_b) != NULL)
				pa(st_a, st_b);
		}
		shift++;
	}
}
