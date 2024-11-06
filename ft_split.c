/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:38:44 by pmoreira          #+#    #+#             */
/*   Updated: 2024/11/06 16:57:44 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int			ft_add_word(char **matrix, const char *start, const char *end);
static char	**ft_free(char **matrix, int index);
static char	**ft_alloc_matrix(char const *s, char c);

static char **ft_alloc_matrix(char const *s, char c)
{
	char	**alloc;
	int		size;
	int		i;

	i = 1;
	size = 0;
	if (s[0] != 0 && s[0] != c)
		size++;
	while (s[i] != 0)
	{
		if (s[i] != c && s[i - 1] == c)
			size++;
		i++;
	}
	alloc = (char **) malloc((size * sizeof(char *)) + 1);
	if (alloc == 0)
		return (0);
	return (alloc);
}

static char	**ft_free(char **matrix, int index)
{
	while (index > 0)
		free(matrix[--index]);
	free(matrix);
	return (0);
}

int	ft_add_word(char **matrix, const char *start, const char *end)
{
	char	*word;
	int		i;

	i = 0;
	word = (char *) malloc(((end - start) * sizeof(char)) + 1);
	if (word == 0)
		return (-1);
	while(start <= end)
		word[i++] = *start++;
	word[i] = '\0';
	*matrix = word;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char		**matrix;
	const char	*start;
	int			index;

	if (s == 0)
		return (0);
	matrix = ft_alloc_matrix(s, c);
	if (matrix == 0)
		return (0);
	index = 0;
	while (*s != 0)
	{
		if (*s != c)
		{
			start = s;
			while (*s != 0 && *s != c)
				s++;
			if (ft_add_word(&matrix[index++], start, s) == -1)
				return (ft_free(matrix, index));
		}
		else
			s++;
	}
	matrix[index] = 0;
	return (matrix);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	**matrix;
	int		i;

	if (argc == 3)
	{
		i = 0;
		matrix = ft_split(argv[1], argv[2][0]);
		while (matrix[i] != 0)
		{
			printf("[%d]: %s\n", i, matrix[i]);
			i++;
		}
	}
	return (0);
}
*/