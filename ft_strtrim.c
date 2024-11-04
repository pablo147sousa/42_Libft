/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:52:59 by pmoreira          #+#    #+#             */
/*   Updated: 2024/11/04 15:33:46 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_count(const char *str, const char *target, int inc)
{
	int	i;
	int	pos;

	i = 0;
	if (inc < 0)
		pos = ft_strlen(str) - 1;
	else
		pos = 0;
	while (target[i] != 0)
	{
		if (target[i] == str[pos])
		{
			pos += inc;
			i = 0;
		}
		else
			i++;
	}
	return (pos);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*output;
	unsigned int	max;
	unsigned int	min;
	int				i;

	min = ft_count(s1, set, 1);
	max = ft_count(s1, set, -1) + 1;
	if (max == 0)
		output = (char *) malloc(1);
	else
		output = (char *) malloc(((max - min) * sizeof(char)) + 1);
	if (output == 0)
		return (0);
	i = 0;
	while (min < max)
		output[i++] = s1[min++];
	output[i] = 0;
	return (output);
}
/*
int main()
{
	char str1[] = "   xxx   xxx";
	char set[] = " x";

	printf("Original: '%s'\n", str1);
	printf("Trimmed: '%s'\n\n", ft_strtrim(str1, set));

	return 0;
}
*/