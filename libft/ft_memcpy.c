/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehtan <mehtan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 16:51:25 by mehtan            #+#    #+#             */
/*   Updated: 2022/07/03 16:51:25 by mehtan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
-The main difference is that memcpy() always 
 copies the exact number of bytes you specify(size_t n)
 strcpy() will copy until it reads a NUL byte, and then stop after that.
-const variables cannot returned!
-If dst and src overlap, behavior is undefined(man)
*/
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (dst == src)
		return (dst);
	i = 0;
	while (i < n)
	{
		*((char *)dst + i) = *((char *)src + i);
		i++;
	}
	return (dst);
}
