/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 11:18:34 by ahooghe           #+#    #+#             */
/*   Updated: 2023/01/17 13:22:01 by ahooghe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

const char	*ft_strnstr(const char *big, const char *little, size_t len);

int			ft_atoi(const char *str);

void		ft_bzero(void *s, size_t n);

void		*ft_calloc(size_t nitems, size_t size);

int			ft_isalnum(int c);

int			ft_isalpha(int c);

int			ft_isascii(int c);

int			ft_isdigit(int c);

int			ft_isprint(int c);

int			ft_isprint(int c);

void		*ft_memchr(void *ptr, int value, size_t num );

int			ft_memcmp(const void *ptr1, const void *ptr2, size_t num);

void		*ft_memcpy(void *dest, const void *src, size_t n);

void		*ft_memmove(void *dest, const void *src, size_t n);

void		*ft_memset(void *str, int c, size_t n);

size_t		ft_strlcat(char *dest, const char *src, size_t n);

char		*ft_strchr(const char *src, int i);

char		*ft_strrchr(const char *src, int i);

char		*ft_strdup(const char *str1);

size_t		ft_strlcpy(char *dest, const char *src, size_t n);

size_t		ft_strlen(const char *str);

int			ft_strncmp(const char *str1, const char *str2, size_t num);

char		*ft_strchr(const char *src, int i);

int			ft_tolower(int c);

int			ft_toupper(int c);

char		*ft_substr(char const *s, unsigned int start, size_t len);

char		*ft_strjoin(char const *s1, char const *s2);

char		*ft_strtrim(char const *s1, char const *set);

char		**ft_split(char const *s, char c);

char		*ft_itoa(int n);

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));

void		ft_striteri(char *s, void (*f)(unsigned int, char *));

void		ft_putchar_fd(char c, int fd);

void		ft_putstr_fd(char *s, int fd);

void		ft_putendl_fd(char *s, int fd);

void		ft_putnbr_fd(int n, int fd);

t_list		*ft_lstnew(void *content);

void		ft_lstadd_front(t_list **lst, t_list *new);

int			ft_lstsize(t_list *lst);

t_list		*ft_lstlast(t_list *lst);

void		ft_lstadd_back(t_list **lst, t_list *new);

void		ft_lstdelone(t_list *lst, void (*del)(void *));

void		ft_lstiter(t_list *lst, void (*f)(void *));

void		ft_lstclear(t_list **lst, void (*del)(void *));

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif