NAME = libft.a

C_SOURCE = ft_bzero.c ft_atoi.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c \
ft_memcpy.c ft_memset.c ft_strlen.c ft_strncmp.c ft_tolower.c ft_toupper.c \
ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c

H_SOURCE = ./

OBJ = $(C_SOURCE:.c=.o)

CC = gcc

CC_FLAGS = -Wall -Werror -Wextra

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $^
#%.o: %.c
#	$(CC) $(CC_FLAGS) -I $(H_SOURCE) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all