/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocomez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 15:03:51 by ocomez            #+#    #+#             */
/*   Updated: 2024/01/25 18:04:09 by ocomez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* using a temporary t_list variable can
 *  help to go withoout modifying the existing list*/

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*temp;
	int		len;

	temp = lst;
	len = 0;
	while (temp)
	{
		temp = temp->next;
		len++;
	}
	return (len);
}
