/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocomez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:40:45 by ocomez            #+#    #+#             */
/*   Updated: 2024/01/18 18:16:44 by ocomez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include "ft_strchr.c"
#include "ft_strlcpy.c"
#include "ft_strlen.c"*/

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	int		i;
	int		j;

	new = 0;
	if (s1 != 0 && set != 0)
	{
		i = 0;
		j = ft_strlen(s1);
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (s1[j - 1] && ft_strchr(set, s1[j - 1]) && j > i)
			j--;
		new = (char *)malloc(sizeof(char) * (j - i + 1));
		if (new)
			ft_strlcpy(new, &s1[i], (j - i + 1));
	}
	return (new);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*s1 = "    Hello World   ";
	char	*set = "   ";

	printf("%s\n", ft_strtrim(s1, set));
	return (0);
}*/
