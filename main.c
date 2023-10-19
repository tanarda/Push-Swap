/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehtan <mehtan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 17:37:31 by mehtan            #+#    #+#             */
/*   Updated: 2023/02/03 17:37:32 by mehtan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	choose_op(t_stack **stack_a, t_stack **stack_b, int piece)
{
	if (piece == 2)
		two_value(stack_a);
	else if (piece == 3)
		three_value(stack_a, piece - 1);
	else if (piece == 4)
		four_value(stack_a, stack_b, piece - 1);
	else if (piece == 5)
		five_value(stack_a, stack_b, piece - 1);
	else
		my_radix(stack_a, stack_b);
}

int	main(int ac, char **av)
{
	t_stack	**stack_a;
	t_stack	**stack_b;
	int		piece;
	char	*arr;
	char	**org;

	if (ac > 1)
	{
		stack_b = malloc(sizeof(t_stack));
		arr = my_parse_args(av);
		org = my_organise_args(arr);
		piece = find_len(org);
		stack_a = generate_stack(org);
		find_positions(stack_a, piece);
		choose_op(stack_a, stack_b, piece);
		free_stack(stack_a);
		free_stack(stack_b);
	}
	system("leaks push_swap");
	return (0);
}
