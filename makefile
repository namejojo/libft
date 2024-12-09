SRC_FILES = ft_toupper.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_putchar_fd.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c \
			ft_split.c \
			ft_strchr.c \
			ft_strdup.c \
			ft_striteri.c \
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strmapi.c  \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strtrim.c \
			ft_substr.c \
			ft_substr.c \
			ft_toupper.c
		
OBJ_FILES = ${SRC_FILES:.c=.o}

SRC_BONUS = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c 

OBJ_BONUS = ${SRC_BONUS:.c=.o}

NAME = libft.a

CC = gcc

FLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJ_FILES}
	ar rcs $@ $^

all: ${NAME}

bonus: ${OBJ_FILES} $(OBJ_BONUS)
	ar rcs $@ $^

clean: 
	rm -f *.o bonus

fclean: clean 
	rm -f ${NAME}

re: fclean all

.PHONY: re fclean clean all