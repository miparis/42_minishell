NAME = libft.a
BONUS_NAME = .bonus
SRCS = ft_isdigit.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_isspace.c\
 		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
		ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
		ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c \
		ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c\
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strcmp.c ft_free.c\
		gnl/get_next_line.c gnl/get_next_line_utils.c

BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c \
		ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJS = ${SRCS:.c=.o}
BONUS_OBJS = ${BONUS:.c=.o}

CC = gcc
CFLAGS = -Wall -Wextra -Werror
REMOVE = rm -f

all: ${NAME}


${NAME}: ${OBJS}
		 @ar rcs ${NAME} ${OBJS}

.c.o:
		@${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean:
		@${REMOVE} ${OBJS} ${BONUS_OBJS}

fclean: clean
		@${REMOVE} ${NAME} ${BONUS_NAME}

re: fclean all

bonus: ${BONUS_NAME}

${BONUS_NAME}: ${BONUS_OBJS}
		  		ar rcs ${NAME} ${BONUS_OBJS}
		  		ar rcs ${BONUS_NAME} ${BONUS_OBJS}


.PHONY:	all clean fclean re bonus
