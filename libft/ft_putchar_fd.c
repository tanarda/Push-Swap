/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehtan <mehtan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 16:51:26 by mehtan            #+#    #+#             */
/*   Updated: 2022/07/03 16:51:26 by mehtan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
fd(file descriptor) values;
0:	Standard input	
1:	Standard output
2:	Standard error

int fd = open(file_path, mod); 
(mod: O_RDONLY | O_CREAT...)

Range of possible values of "fd" is from 0 to 1023 for Linux system.
*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
