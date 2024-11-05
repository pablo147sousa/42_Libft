/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:38:44 by pmoreira          #+#    #+#             */
/*   Updated: 2024/11/05 10:53:31 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_count_words(const char *s, char c);

static int	ft_count_words(const char *s, char c)
{
	int	count;
	int	i;

	i = 1;
	count = 0;
	while (s[i] != 0)
	{
		if ((s[i] == c && s[i - 1] != c) || (s[i] == c && s[i + 1] != 0))
			count++;
		i++;
	}
	return (count);
}
/*
char	**ft_split(char const *s, char c)
{

}
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	if (argc == 3)
	{
		printf("Result: %d", ft_count_words(argv[1], argv[2][0]));
	}
	return 0;
}
