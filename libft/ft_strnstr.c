/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocomez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 22:33:07 by ocomez            #+#    #+#             */
/*   Updated: 2024/01/18 17:35:38 by ocomez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	s;

	i = 0;
	s = 0;
	if (little[0] == 0)
		return ((char *)big);
	if (len == 0)
		return (NULL);
	while (big[s] != '\0' && s < len)
	{
		if (big[s] == little[i])
		{
			while (big[i + s] == little[i] && i + s < len)
			{
				if (little[i + 1] == '\0')
					return ((char *)(big + s));
				i++;
			}
			i = 0;
		}
		s++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	const char	*s1 = "Hellohowareyouman";
	const char	*s2 = "howareyou";

	printf("%s\n", ft_strnstr(s1, s2, 15));
	return (0);
}*/
