/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehtan <mehtan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 16:51:26 by mehtan            #+#    #+#             */
/*   Updated: 2022/07/03 16:51:26 by mehtan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_word_counter(char const *s, char c)
{
	int	i;
	int	total;

	i = 0;
	total = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
			total++;
		while (s[i] != c && s[i])
			i++;
	}
	return (total);
}

int	ft_letter_counter(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

char	**ft_strclean(char **buff)
{
	int	j;

	j = 0;
	while (buff[j])
		free(buff[j++]);
	free(buff);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**buff;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	buff = (char **)malloc(sizeof(char *) * (ft_word_counter(s, c) + 1));
	if (!buff)
		return (0);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s != c && *s)
		{
			buff[i] = (char *)ft_substr(s, 0, ft_letter_counter(s, c));
			if (!buff[i++])
				return (ft_strclean(buff));
		}
		while (*s != c && *s)
			s++;
	}
	buff[i] = 0;
	return (buff);
}
