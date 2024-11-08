/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:41:39 by pmoreira          #+#    #+#             */
/*   Updated: 2024/11/08 16:46:25 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstfree(t_list *lst,void (*del)(void *));

t_list	*ft_lstfree(t_list *lst,void (*del)(void *))
{
	t_list *temp;

	if (lst == 0)
		return;
	else
	{
		temp = lst;
		while ((lst)->next != 0)
		{
			del((lst)->content);
			temp = (lst)->next;
			free((lst));
			(lst) = temp;
		}
		del((lst)->content);
		free(lst);
	}
	lst = 0;
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*output;
	t_list	*temp;

	if (lst == 0)
		return (0);
	output = 0;
	while (lst->next != 0)
	{
		temp = ft_lstnew(f(temp->content));
		if (temp == 0)
		{
			ft_lstfree()
			
		}
			
		output->next = temp->next;
		
	}
	
}
