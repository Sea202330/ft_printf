/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocomez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:20:08 by ocomez            #+#    #+#             */
/*   Updated: 2024/01/22 16:58:07 by ocomez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
int	ft_strlen(const char *str)
{
        int     len;

        len = 0;
        while (str[len] != '\0')
                len++;
        return (len);
}*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				l;

	d = (unsigned char *) dest;
	s = (const unsigned char *) src;
	l = 0;
	if (src < dest)
	{
		while (n-- > 0)
			d[n] = s[n];
	}
	else
	{
		while (l < n)
		{
			d[l] = s[l];
			l++;
		}
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	source[] = "Hello World";
	char	dest[10];

	ft_memmove(dest, source, ft_strlen(source) + 1);
	printf("source: %s \n", source);
	printf("destination: %s \n", dest);
	return (0);
}*/
