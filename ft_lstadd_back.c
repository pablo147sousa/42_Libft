/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 12:58:00 by pmoreira          #+#    #+#             */
/*   Updated: 2024/11/08 14:23:07 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new);

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (*lst == 0)
		*lst = new;
	else
	{
		temp = *lst;
		while (temp->next != 0)
			temp = temp->next;
		temp->next = new;
	}
}
/* 
int main(void)
{
	t_list	*lst;


	lst = 0;
	ft_lstadd_back(&lst, ft_lstnew((void *)1));
	ft_lstadd_back(&lst, ft_lstnew((void *)2));
	ft_lstadd_back(&lst, ft_lstnew((void *)3));
	printf("%d\n", (ft_lstlast(lst)->content == (void *)3));
	return (0);
}
*/