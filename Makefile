SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strncmp.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c
SRCSBONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJS = ${SRCS:.c=.o}
OBJSBONUS = ${SRCSBONUS:.c=.o}
CFLAGS = -Wall -Wextra -Werror # -Wall : unused variable , missing return statement , uninitialized variable ; -Wextra : unused function parametre , conversion between signed and unsigned type
CC = cc
AR = ar rc
NAME = libft.a
RM = rm -f

.PHONY: all bonus clean fclean re # meaning they are not real files. It prevents conflicts with files that might have the same names as the targets.

all: $(NAME)

bonus: $(OBJSBONUS) $(OBJS)

$(OBJSBONUS): $(SRCSBONUS)
	$(CC) $(CFLAGS) -c $(SRCSBONUS)
	$(AR) $(NAME) $(OBJSBONUS)

$(NAME): $(OBJS)

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) $(OBJSBONUS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
