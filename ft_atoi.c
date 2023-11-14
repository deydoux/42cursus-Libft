/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:43:36 by deydoux           #+#    #+#             */
/*   Updated: 2023/11/14 15:59:03 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	return (c == ' ' || c == '\f' || c == '\n' || c == '\r' || c == '\t'
		|| c == '\v');
}

int	ft_atoi(const char *nptr)
{
	long	n;
	int		sign;

	sign = 1;
	n = 0;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
		sign -= 2 * (*nptr++ == '-');
	while (ft_isdigit(*nptr))
	{
		n = n * 10 + *nptr++ - '0';
		if (n < 0)
			return (-(sign == 1));
	}
	return (sign * n);
}
