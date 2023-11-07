/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:30:49 by deydoux           #+#    #+#             */
/*   Updated: 2023/11/07 17:40:47 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	const size_t	bytes = nmemb * size;
	void			*ptr;

	if (!bytes)
		return (NULL);
	ptr = malloc(bytes);
	if (ptr)
		ft_bzero(ptr, bytes);
	return (ptr);
}
