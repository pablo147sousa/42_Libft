/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:38:44 by pmoreira          #+#    #+#             */
/*   Updated: 2024/11/05 13:36:32 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_count_words(const char *s, char c);
static char *ft_make_word(const char *start, const char *end);
void		ft_free(char **matrix);
/*
void	ft_free(char **matrix)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (matrix)
}
*/
static char *ft_make_word(const char *start, const char *end)
{
	char	*word;
	int		i;
	int		size;

	while (*start++ != *end)
		size++;
	i = 0;
	word = (char *) malloc((size * sizeof(char)) + 1);
	if (word == 0)
		return (0);
	while (*start != *end)
		word[i++] = *start++;
	word[i] = 0;
	return(word);
}
/*
static int ft_count_words(const char *s, char c)
{
	int	count;
	int	i;

	i = 1;
	count = 0;
	if  (s[0] != c)
		count++;
	while (s[i] != 0)
	{
		if (s[i] != c && s[i - 1] == c)
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	char	*word;
	int		size;
	int		i;
	int		j;

	size = ft_count_words(s, c);
	matrix = (char **) malloc((size * sizeof(char *)) + 1);
	if (matrix == 0)
		return (0);
	i = 0;
	j = 0;
	while (s[i] != 0)
	{
		if (s[i] == c && i > 0)
		{
			word = ft_make_word(&s[j], &s[i]);
			if (word == 0)

		}
	}

	matrix[size + 1] = 0;
	return (matrix);
}
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	if (argc == 2)
	{
		//printf("Result: %d", ft_count_words(argv[1], argv[2][0]));
		char	*str;

		str = ft_make_word(&argv[1][0], &argv[1][sizeof(argv[1]) / sizeof(char)]);
		printf("result : %s", str);
	}
	return 0;
}
