/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edvieira <edvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:31:39 by edvieira          #+#    #+#             */
/*   Updated: 2024/07/17 21:47:15 by edvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}			t_list;

void	ft_putchar_fd(char c, int fd); // c
void	ft_putstr_fd(char *c, int fd); // c
void	ft_putendl_fd(char *s, int fd); // c
void	ft_putnbr_fd(int n, int fd); // c
void	ft_bzero(void *str, size_t operations);
void	ft_striteri(char *s, void (*f)(unsigned int, char*)); // c
void	*ft_calloc(size_t nmemb, size_t size);
void	*ft_memchr(const void *s, int c, size_t n); // rever
void	*ft_memcpy(void *dest, const void *src, size_t n); // rever
void	*ft_memmove(void *dest, const void *src, size_t n); // rever
void	*ft_memset(void *str, int swc_character, size_t operations);

char	*ft_itoa(int n); // c
char	*ft_strdup(const char *str);
char	**ft_split(const char *s, char c); // c
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strjoin(char *s1, char *s2); // c
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_substr(char const *s, unsigned int start, size_t len); // c
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char)); // c

int		ft_tolower(int ascii_num);
int		ft_toupper(int ascii_num);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_isalpha(int c);
int		ft_atoi(const char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_strlcpy(char *dest, const char *src, size_t size);
int		ft_strlcat(char *dest, const char *src, size_t size);
int		ft_memcmp(const void *s1, const void *s2, size_t n);

size_t	ft_strlen(const char *str);
//	BONUS

t_list	*ft_lstnew(void *content);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
int		ft_lstsize(t_list *lst);

#endif
