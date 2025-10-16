CC=gcc
CFLAGS= -Wall -Wextra -Werror
SRC= ft_atoi.c  ft_isascii.c  ft_memcpy.c   ft_strlcat.c  ft_strrchr.c ft_bzero.c ft_isdigit.c  ft_memmove.c  ft_strlcpy.c  ft_tolower.c ft_calloc.c   ft_isprint.c  ft_memset.c   ft_strlen.c   ft_toupper.c ft_isalnum.c  ft_memchr.c   ft_strchr.c   ft_strncmp.c ft_isalpha.c  ft_memcmp.c   ft_strdup.c   ft_strnstr.c

NAME= libft.a

all : $(NAME)
#well see abt this one later on: $(CC) $(CFLAGS) *.c -o $(NAME)

clean:
	rm -f *.o

fclean:
	rm -f $(NAME)
