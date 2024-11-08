/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:49:45 by pmoreira          #+#    #+#             */
/*   Updated: 2024/11/08 15:34:51 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *));

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (*lst == 0)
		return ;
	else
	{
		temp = *lst;
		while ((*lst)->next != 0)
		{
			del((*lst)->content);
			temp = (*lst)->next;
			free((*lst));
			(*lst) = temp;
		}
		del((*lst)->content);
		free(*lst);
	}
	*lst = 0;
}
