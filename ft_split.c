/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:21:57 by deydoux           #+#    #+#             */
/*   Updated: 2023/11/08 12:46:57 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	split_size(char const *s, char c)
{
	size_t	size;

	size = 0;
	while (*s)
	{
		if (*s != c && (!s[1] || s[1] == c))
			size++;
		s++;
	}
	return (size);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	start;
	size_t	s_len;
	size_t	split_len;

	if (!s)
		return (NULL);
	split = malloc(sizeof(char *) * split_size(s, c));
	if (!split)
		return (NULL);
	s_len = 0;
	start = 0;
	split_len = 0;
	while (s[s_len])
	{
		if (s[s_len++] == c)
			start = s_len;
		else if (!s[s_len] || s[s_len] == c)
			split[split_len++] = ft_substr(s, start, s_len - start);
	}
	split[split_len] = NULL;
	return (split);
}
