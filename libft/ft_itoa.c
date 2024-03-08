/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocomez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:18:37 by ocomez            #+#    #+#             */
/*   Updated: 2024/01/25 13:11:00 by ocomez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_number_size(int number)
{
	unsigned int	lenght;

	lenght = 0;
	if (number <= 0)
	{
		number *= -1;
		lenght++;
	}
	while (number > 0)
	{
		number /= 10;
		lenght++;
	}
	return (lenght);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		number;
	int		lenght;

	lenght = ft_number_size(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	number = n;
	if (n < 0)
		number *= -1;
	str = (char *)malloc((lenght + 1));
	if (!str)
		return (NULL);
	str[lenght] = '\0';
	while (lenght > 0)
	{
		str[lenght - 1] = (number % 10) + '0';
		number /= 10;
		lenght--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
