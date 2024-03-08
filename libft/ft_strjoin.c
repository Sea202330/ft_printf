/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocomez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:15:20 by ocomez            #+#    #+#             */
/*   Updated: 2024/01/18 15:39:46 by ocomez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include "ft_strlen.c"*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		i;
	int		l;

	if (!s1 && !s2)
		return (NULL);
	new = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!new)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	l = 0;
	while (s2[l])
	{
		new[i] = s2[l];
		i++;
		l++;
	}
	new[i] = '\0';
	return (new);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*s1 = "abscdgfh";
	char	*s2 = "hfhfhf";

	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
}*/
