/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocomez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 20:15:23 by ocomez            #+#    #+#             */
/*   Updated: 2024/01/24 19:40:07 by ocomez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(dest);
	if (size <= j)
		return (size + ft_strlen(src));
	while (((j + i + 1) < size) && (src[i] != '\0'))
	{
		dest[j + i] = src[i];
		i++;
	}
	if (j < size)
		dest[j + i] = '\0';
	return (j + ft_strlen(src));
}
