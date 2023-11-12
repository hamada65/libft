SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strncmp.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c
SRCSBONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
OBJS = ${SRCS:.c=.o}
OBJSBONUS = ${SRCSBONUS:.c=.o}
CFLAGS = -Wall -Wextra -Werror # -Wall : unused variable , missing return statement , uninitialized variable ; -Wextra : unused function parametre , conversion between signed and unsigned type
CC = cc
AR = ar rc
NAME = libft.a
RM = rm -f

.PHONY: all bonus clean fclean re # meaning they are not real files. It prevents conflicts with files that might have the same names as the targets.

all: $(NAME)

bonus: $(OBJS) $(OBJSBONUS)

$(OBJSBONUS): $(SRCSBONUS)
	$(CC) $(CFLAGS) -c $(SRCSBONUS)
	$(AR) $(NAME) $(OBJSBONUS) $(OBJS)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS)

clean:
	$(RM) $(OBJS) $(OBJSBONUS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
