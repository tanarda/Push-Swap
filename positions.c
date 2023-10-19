/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   positions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehtan <mehtan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 17:45:37 by mehtan            #+#    #+#             */
/*   Updated: 2023/02/03 17:45:38 by mehtan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	bubble_sort(int nums[], int nb)
{
	int	i;
	int	j;
	int	temp;

	j = 0;
	i = 0;
	while (i < nb)
	{
		j = 0;
		while (j < nb)
		{
			if (nums[i] < nums[j])
			{
				temp = nums[i];
				nums[i] = nums[j];
				nums[j] = temp;
			}
			j++;
		}
		i++;
	}
}

void	assign_positions(int nums[], t_stack **st, int nb)
{
	int		i;
	t_stack	*tmp;

	i = 0;
	while (i < nb)
	{
		tmp = (*st);
		while (tmp != NULL)
		{
			if (nums[i] == tmp->number)
			{
				tmp->real_pos = i;
			}
			tmp = tmp->next;
		}
		i++;
	}
}

void	find_positions(t_stack **st, int nb)
{
	int		i;
	t_stack	*tmp;
	int		*nums;

	nums = malloc(sizeof(int));
	tmp = (*st);
	i = 0;
	while (tmp != NULL)
	{
		tmp->init_pos = i;
		nums[i] = tmp->number;
		i++;
		tmp = tmp->next;
	}
	bubble_sort(nums, nb);
	assign_positions(nums, st, nb);
	free(nums);
}
