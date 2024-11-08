/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 10:15:49 by pmoreira          #+#    #+#             */
/*   Updated: 2024/11/08 11:08:17 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content);

t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = (t_list *) malloc(sizeof(t_list));
	if (lst == 0)
		return (0);
	lst->content = content;
	lst->next = 0;
	return (lst);
}
/* 
int main()
{
	t_list	*lst;

	lst = ft_lstnew((void *)42);
	printf("%d", (lst->content != 0));
	free (lst);
	return (0);
}
 */