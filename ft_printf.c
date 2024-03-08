/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocomez <ocomez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:36:04 by ocomez            #+#    #+#             */
/*   Updated: 2024/03/08 18:21:25 by ocomez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_eval_format(const char format_char, va_list args)
{
	int	return_value;

	return_value = 0;
	if (format_char == '%')
	{
		write(1, "%", 1);
		return (1);
	}
	if (format_char == 'c')
		return_value += ft_print_char(va_arg(args, int));
	else if (format_char == 's')
		return_value += ft_print_str(va_arg(args, char *));
	else if (format_char == 'p')
		return_value += ft_print_ptr(va_arg(args, unsigned long long));
	else if (format_char == 'u')
		return_value += ft_print_unsigned(va_arg(args, unsigned int));
	else if (format_char == 'i' || format_char == 'd')
		return_value += ft_print_int(va_arg(args, int));
	else if (format_char == 'x' || format_char == 'X')
		return_value += ft_print_hex(va_arg(args, unsigned int), format_char);
	return (return_value);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		len;
	va_list	args;

	if (!format)
		return (0);
	va_start(args, format);
	i = 0;
	len = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			len += ft_eval_format(format[i + 1], args);
			i++;
		}
		else
			len = len + write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (len);
}
