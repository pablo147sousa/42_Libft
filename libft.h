/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:59:03 by pmoreira          #+#    #+#             */
/*   Updated: 2024/10/30 10:40:20 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>

//------------------------MANDATORY-------------------------

int		ft_strncmp(const char *s1, const char *s2, size_t n); //ok

int		ft_isascii(int c); //ok

int		ft_isdigit(int c); //ok

int		ft_isalpha(int c); //ok

int		ft_isprint(int c); //ok

int		ft_isalnum(int c); //ok

int		ft_toupper(int c); //ok

int		ft_tolower(int c); //ok

int		ft_atoi(const char *nptr); //ok

int		ft_memcmp(const void *s1, const void *s2, size_t n); //ok

void	*ft_memset(void *s, int c, size_t n); //ok

void	ft_bzero(void *s, size_t n); //ok

void	*ft_memcpy(void *dest, const void *src, size_t n); //ok

void	*ft_memchr(const void *s, int c, size_t n); //ok

void	*ft_calloc(size_t nmemb, size_t size); //ok

void	*ft_memmove(void *dest, const void *src, size_t n);

size_t	ft_strlen(const char *str); //ok

size_t	ft_strlcpy(char *dst, const char *src, size_t size); //ok

size_t	ft_strlcat(char *dst, const char *src, size_t size); //ok

char	*ft_strchr(const char *s, int c); //ok

char	*ft_strrchr(const char *s, int c); //ok

char	*ft_strnstr(const char *big, const char *little, size_t len); //ok

char	*ft_strdup(const char *s); //ok

//-----------------------------------------------------------

#endif