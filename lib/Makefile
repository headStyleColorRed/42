NAME = libft.a

FLAG = -Wall -Wextra -Werror

SRC = ft_memset.c \
	   ft_bzero.c \
	   ft_memcpy.c \
	   ft_memccpy.c \
	   ft_memmove.c \
	   ft_memchr.c \
	   ft_memcmp.c \
	   ft_strlen.c \
	   ft_isalpha.c \
	   ft_isdigit.c \
	   ft_isalnum.c \
	   ft_isascii.c \
	   ft_isprint.c \
	   ft_toupper.c \
	   ft_tolower.c \
	   ft_strchr.c \
	   ft_strrchr.c \
	   ft_strncmp.c \
	   ft_strlcpy.c \
	   ft_strlcat.c \
	   ft_strnstr.c \
	   ft_strstr.c \
	   ft_atoi.c \
	   ft_calloc.c \
	   ft_strdup.c \
	   ft_substr.c \
	   ft_strjoin.c \
	   ft_strtrim.c \
	   ft_split.c \
	   ft_itoa.c \
	   ft_strmapi.c \
	   
OBJ = $(SRC:%.c=%.o)

RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	@gcc -c $(FLAG) $(OPTION) $(SRC)
	@ar -rcv $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	$(RM) *.o

fclean: clean
	$(RM) $(NAME)
	$(RM) *.out
	$(RM) *.gch

re: fclean all