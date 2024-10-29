/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:34:40 by pmoreira          #+#    #+#             */
/*   Updated: 2024/10/29 13:21:31 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n);

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	cbyte;
	size_t			i;

	i = 0;
	str = (unsigned char *) s;
	cbyte = (unsigned char ) c;
	while (str[i] != 0 && i < n)
	{
		if (str[i] == cbyte)
			return (&str[i]);
		i++;
	}
	return (0);
}

/*
#include <string.h>

int main()
{
	char	src[10] = "testead";
	char	letter;
	//int		size;

	letter = 97;
	//size = sizeof(src) / sizeof(char);
	printf ("Result: %s\n",(char *) ft_memchr(src, letter, 3));
	//size = sizeof(src) / sizeof(char);
	printf ("Expected: %s\n",(char *) memchr(src, letter, 3));
	return 0;
}
*/