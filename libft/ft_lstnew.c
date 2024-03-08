/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocomez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 20:44:51 by ocomez            #+#    #+#             */
/*   Updated: 2024/01/21 13:46:31 by ocomez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* decleare a new list element */
/* allocate memory for it */
/* set the new element variables */
/* new -> content = content */
/* new -> next = NULL */
/* return the new element */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
