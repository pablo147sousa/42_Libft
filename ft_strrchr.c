/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:00:48 by pmoreira          #+#    #+#             */
/*   Updated: 2024/10/29 16:34:12 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c);

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*local;
	char	*str;

	i = 0;
	local = 0;
	str = (char *) s;
	while (str[i] != 0)
	{
		if (str[i] == c)
			local = &str[i];
		i++;
	}
	return (local);
}
