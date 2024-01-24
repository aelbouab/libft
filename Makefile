NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_tolower.c\
		ft_toupper.c\
		ft_atoi.c\
		ft_memset.c\
		ft_bzero.c\
		ft_strdup.c\
		ft_isalpha.c\
		ft_strlen.c\
		ft_isdigit.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_strchr.c\
		ft_memcpy.c\
		ft_strlcat.c\
		ft_strrchr.c\
		ft_strlcpy.c\
		ft_isprint.c\
		ft_calloc.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_memmove.c\
		ft_strncmp.c\
		ft_strnstr.c\
		ft_substr.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_itoa.c\
		ft_split.c\
		ft_strmapi.c\
		ft_striteri.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c

SRCB = ft_lstnew_bonus.c\
		ft_lstsize_bonus.c\
		ft_lstlast_bonus.c\
		ft_lstadd_back_bonus.c\
		ft_lstadd_front_bonus.c\
		ft_lstdelone_bonus.c\
		ft_lstclear_bonus.c\
		ft_lstiter_bonus.c\
		ft_lstmap_bonus.c

OBJS = $(SRC:.c=.o)
OBJB = $(SRCB:.c=.o)

INCLUDES = libft.h

$(NAME): $(OBJS) $(INCLUDES)
	ar rc $(NAME) $^

%.o: %.c $(INCLUDES)
	 $(CC) $(CFLAGS) -o $@ -c $<

all: $(NAME)

clean:
	rm -rf $(OBJS) $(OBJB)

fclean: clean
	rm -rf $(NAME)

re: fclean all

bonus: $(OBJB) $(INCLUDES)
	ar rc $(NAME) $^

.PHONY: clean