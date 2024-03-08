/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocomez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:52:26 by ocomez            #+#    #+#             */
/*   Updated: 2024/01/21 14:14:14 by ocomez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* set the new element's next address to point */
/* to the start of the existing list */
/* set the existing list pointer to point to the new element */

#include "libft.h"

void	ft_lstadd_front(t_list	**lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
