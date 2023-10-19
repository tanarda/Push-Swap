/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehtan <mehtan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 16:51:27 by mehtan            #+#    #+#             */
/*   Updated: 2022/07/03 16:51:27 by mehtan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*return_str;
	size_t	i;
	size_t	j;

	return_str = malloc (sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 2));
	i = -1;
	j = -1;
	while (s1[++i])
		return_str[i] = s1[i];
	return_str[i] = ' ';
	i++;
	while (s2[++j])
		return_str[i++] = s2[j];
	return_str[i] = '\0';
	free (s1);
	return (return_str);
}
