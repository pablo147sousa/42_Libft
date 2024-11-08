/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:55:29 by pmoreira          #+#    #+#             */
/*   Updated: 2024/11/08 12:26:53 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst);

int	ft_lstsize(t_list *lst)
{
	int	size;

	if (lst == 0)
		return (0);
	size = 1;
	while (lst->next != 0)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}
/* 
int main()
{
	t_list *l = NULL;
	printf("%d\n",ft_lstsize(l));
	ft_lstadd_front(&l, ft_lstnew((void *)1));
	printf("%d\n",ft_lstsize(l));
	ft_lstadd_front(&l, ft_lstnew((void *)2));
	printf("%d\n",ft_lstsize(l));
	return (0);
}
 */