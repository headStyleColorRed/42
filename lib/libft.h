
#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>
#include <stdio.h> 
#include <stdlib.h>
#include <unistd.h>

void				*ft_memset(void *str, int c, size_t n);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
int				ft_strlen(const char *s);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
size_t              ft_strlcpy(char *str1, const char *str2, size_t size);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
char				*ft_strnstr(const char *big, const char *lit, size_t len);
int					ft_atoi(const char *str);
void                *ft_calloc(size_t nitems, size_t size);
char                *ft_strdup(const char *src);
char	            *ft_strstr(const char *str, const char *to_find);
char	            *ft_substr(char *str, size_t start, size_t end);
char                *ft_strjoin(char const *str1, char const *str2);
char                *ft_strtrim(char const *s1, char const *set);
char                **ft_split(const char *string, char *splitter);
char	            *ft_itoa(int nb);
char	            *ft_strmapi(char const *string, char (*my_function)(unsigned int, char));
void                ft_putchar_fd(char c, int fd);
void                ft_putstr_fd(char *s, int fd);
void                ft_putendl_fd(char *s, int fd);
void                ft_putnbr_fd(int n, int fd);
typedef struct      s_list
{
    void    *content;
    struct  s_list *next;
}                   t_list;
void                ft_lstadd_front(t_list **alst, t_list *new);
int                 ft_lstsize(t_list *lst);
t_list              *ft_lstlast(t_list *lst);
void                ft_lstadd_back(t_list **alst, t_list *new);
void                ft_lstdelone(t_list *lst, void (*del)(void*));


#endif
