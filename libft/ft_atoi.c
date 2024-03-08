/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocomez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:05:51 by ocomez            #+#    #+#             */
/*   Updated: 2024/01/18 13:24:16 by ocomez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	n;
	int	p;

	i = 0;
	n = 0;
	p = 0;
	while (nptr[p] == 32 || (nptr[p] >= 9 && nptr[p] <= 13))
		p++;
	if (nptr[p] == '+' || nptr[p] == '-')
	{
		if (nptr[p] == '-')
			n++;
		p++;
	}
	while (nptr[p] >= '0' && nptr[p] <= '9')
	{
		i = i * 10 + (nptr[p] - 48);
		p++;
	}
	if (n % 2 == 1)
		i = i * -1;
	return (i);
}
