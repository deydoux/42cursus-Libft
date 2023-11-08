/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:53:08 by deydoux           #+#    #+#             */
/*   Updated: 2023/11/08 09:30:33 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_calloc(1, sizeof(char)));
	len++;
	sub = malloc(sizeof(char) * len);
	if (sub)
		ft_strlcpy(sub, s + start, len);
	return (sub);
}
