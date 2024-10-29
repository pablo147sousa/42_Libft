/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:26:42 by pmoreira          #+#    #+#             */
/*   Updated: 2024/10/29 13:29:43 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dt;
	const unsigned char	*sc;
	size_t				i;

	dt = (unsigned char *) dest;
	sc = (const unsigned char *) src;
	i = 0;
	while (i < n)
	{
		dt[i] = sc[i];
		i++;
	}
	return (dest);
}
/*
#include <string.h>

int main()
{
	char	src[] = "nnot_ok";
	char	src2[] = "nnot_ok";
	char	*cpy;
	//int		size;

	cpy = "itisei";
	//size = sizeof(src) / sizeof(char);
	printf ("Result: %s\n",(char *) ft_memcpy(src, cpy, 4));
	//size = sizeof(src2) / sizeof(char);
	printf ("Expected: %s\n",(char *) memcpy(src2, cpy, 4));
	return 0;
}
*/