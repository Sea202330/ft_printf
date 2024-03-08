/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocomez <ocomez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 15:29:44 by ocomez            #+#    #+#             */
/*   Updated: 2024/03/08 18:21:48 by ocomez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

static int	ft_len_hex(unsigned int hex)
{
	int	len;

	len = 0;
	while (hex != 0)
	{
		len++;
		hex = hex / 16;
	}
	return (len);
}

static void	ft_put_hex(unsigned int hex, const char format_char)
{
	if (hex >= 16)
	{
		ft_put_hex((hex / 16), format_char);
		ft_put_hex((hex % 16), format_char);
	}
	else
	{
		if (hex < 10)
			ft_putchar_fd((hex + '0'), 1);
		else
		{
			if (format_char == 'x')
				ft_putchar_fd((hex - 10 + 'a'), 1);
			if (format_char == 'X')
				ft_putchar_fd((hex - 10 + 'A'), 1);
		}
	}
}

int	ft_print_hex(unsigned int hex, const char format_char)
{
	if (hex == 0)
		return (write(1, "0", 1));
	else
		ft_put_hex(hex, format_char);
	return (ft_len_hex(hex));
}
