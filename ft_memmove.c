/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:40:48 by pmoreira          #+#    #+#             */
/*   Updated: 2024/11/04 11:31:49 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dt;
	const unsigned char	*sc;

	if (dest <= src)
		return (ft_memcpy(dest, src, n));
	else if (dest > src)
	{
		dt = (unsigned char *) dest;
		sc = (const unsigned char *) src;
		dt += n - 1;
		sc += n - 1;
		while (n--)
		{
			*dt-- = *sc--;
		}
	}
	return (dest);
}
