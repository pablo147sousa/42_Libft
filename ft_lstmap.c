/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:41:39 by pmoreira          #+#    #+#             */
/*   Updated: 2024/11/13 11:04:55 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*output;
	t_list	*temp;

	output = NULL;
	while (lst)
	{
		temp = ft_lstnew(f(lst->content));
		if (temp == 0)
		{
			ft_lstclear(&output, del);
			return (NULL);
		}
		ft_lstadd_back(&output, temp);
		lst = lst->next;
	}
	return (output);
}