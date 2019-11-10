#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 32
# endif

char	*ft_strcat(char *dest, const char *src);
char	*ft_strnew(size_t size);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *str);

typedef struct s_list
{
    void *content;
    size_t content_size;
    struct s_list *next;
} t_list;

#endif