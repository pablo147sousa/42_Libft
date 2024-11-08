/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:59:03 by pmoreira          #+#    #+#             */
/*   Updated: 2024/11/08 12:58:59 by pmoreira         ###   ########.fr       */
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

void	*ft_memmove(void *dest, const void *src, size_t n); //ok

void	ft_striteri(char *s, void (*f)(unsigned int, char *)); //ok

void	ft_putchar_fd(char c, int fd); //ok

void	ft_putstr_fd(char *s, int fd); //ok

void	ft_putendl_fd(char *s, int fd); //ok

void	ft_putnbr_fd(int n, int fd); //ok

size_t	ft_strlen(const char *str); //ok

size_t	ft_strlcpy(char *dst, const char *src, size_t size); //ok

size_t	ft_strlcat(char *dst, const char *src, size_t size); //ok

char	*ft_strchr(const char *s, int c); //ok

char	*ft_strrchr(const char *s, int c); //ok

char	*ft_strnstr(const char *big, const char *little, size_t len); //ok

char	*ft_strdup(const char *s); //ok

char	*ft_substr(char const *s, unsigned int start, size_t len); //ok

char	*ft_strjoin(char const *s1, char const *s2); //ok

char	*ft_strtrim(char const *s1, char const *set); //ok

char	**ft_split(char const *s, char c); //ok

char	*ft_itoa(int n); //ok

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char)); //ok

//--------------------------BONUS----------------------------

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstnew(void *content); //ok

t_list	*ft_lstlast(t_list *lst);

int		ft_lstsize(t_list *lst); //ok

void	ft_lstadd_front(t_list **lst, t_list *new); //ok

void	ft_lstadd_back(t_list **lst, t_list *new);

#endif