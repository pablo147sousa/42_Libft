/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:43:56 by pmoreira          #+#    #+#             */
/*   Updated: 2024/10/29 15:43:20 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size);

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	sz;

	if (size <= 0)
		return (0);
	i = ft_strlen(dst);
	j = 0;
	sz = ft_strlen(dst) + ft_strlen(src);
	while (src[j] != 0 && i < size - 1)
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = 0;
	return (sz);
}
