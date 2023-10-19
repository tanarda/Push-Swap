/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehtan <mehtan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 17:32:56 by mehtan            #+#    #+#             */
/*   Updated: 2023/02/03 17:32:57 by mehtan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*my_parse_args(char **av)
{
	char	*arr;
	int		i;
	int		j;

	arr = malloc(sizeof(char *));
	i = 1;
	while (av[i])
	{
		j = 0;
		if (av[i][0] == '\0')
			ft_exit();
		while (av[i][j] == ' ')
			j++;
		if (av[i][j] == '\0')
			ft_exit();
		arr = ft_strjoin(arr, av[i]);
		i++;
	}
	return (arr);
}

char	**my_organise_args(char *arr)
{
	char	**organized;

	organized = ft_split(arr, ' ');
	return (organized);
}

int	find_len(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
		i++;
	return (i);
}

t_stack	**generate_stack(char **organized)
{
	int		i;
	t_stack	**st;

	st = malloc(sizeof(t_stack) * find_len(organized));
	i = 0;
	while (organized[i])
	{
		if (!is_num_in_range(organized[i]) || !is_number(organized[i])
			|| is_repeat(st, organized[i]))
			ft_exit();
		stack_add_bottom(st, new((int)ft_atoi(organized[i])));
		i++;
	}
	return (st);
}
