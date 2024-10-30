/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:30:23 by pmoreira          #+#    #+#             */
/*   Updated: 2024/10/30 10:41:25 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s);

char	*ft_strdup(const char *s)
{
	char	*dup;
	int		i;
	int		sz;

	sz = ft_strlen(s);
	if (sz == 0)
		return (0);
	dup = (char *) malloc(sz * sizeof(char));
	if (dup == 0)
		return (0);
	i = 0;
	while (s[i] != 0)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (0);
}
