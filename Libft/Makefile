NAME=libft.a
FLAGS=-Wall -Wextra -Werror

FUNCTIONS=	ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_strlen.c \
			ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_atoi.c \
			ft_strncmp.c \
			ft_memcmp.c \
			ft_strnstr.c \
			ft_memchr.c \
			ft_strdup.c \
			ft_calloc.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_memmove.c \
			ft_itoa.c \
			ft_split.c
OBJ= $(FUNCTIONS:%.c=%.o)

FUNCTIONS_BONUS=	ft_lstnew_bonus.c \
					ft_lstadd_back_bonus.c \
					ft_lstadd_front_bonus.c \
					ft_lstlast_bonus.c \
					ft_lstsize_bonus.c \
					ft_lstdelone_bonus.c \
					ft_lstclear_bonus.c \
					ft_lstiter_bonus.c \
					ft_lstmap_bonus.c
OBJ_BONUS= $(FUNCTIONS_BONUS:%.c=%.o)

#create library
all: $(NAME)
$(NAME): $(OBJ)
	ar crs $(NAME) $^
#create library with Bonus
bonus: $(OBJ) $(OBJ_BONUS)
	ar crs $(NAME) $^

%.o: %.c
	cc $(FLAGS) -c $<

clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
re: fclean $(NAME)
.PHONY: clean fclean re