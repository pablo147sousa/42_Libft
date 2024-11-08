/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:12:47 by pmoreira          #+#    #+#             */
/*   Updated: 2024/11/08 11:52:43 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new);

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/* 
int main()
{
	t_list	**lst;
	t_list	*node;
	t_list	*new;

	node = ft_lstnew((void *) 42);
	new = ft_lstnew((void *) 24);
	lst = &node;
	ft_lstadd_front(lst, new);
	printf("%d", (*lst == new));
	return (0);
}
 */