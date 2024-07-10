/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabguerr <gabguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:45:09 by gabguerr          #+#    #+#             */
/*   Updated: 2024/04/29 15:05:55 by gabguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The function deallocates the memory occupied by a single element of a linked
//list while using a user-provided function to free the content of that element.

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	(del)(lst->content);
	free(lst);
	lst = NULL;
}
