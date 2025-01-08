
NAME = libft.a

SRCS_DIR = ./

SRC = ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_strnstr.c \
	ft_atoi.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_substr.c \
	ft_strjoin.c\
	ft_strtrim.c\
	ft_split.c\
	ft_itoa.c\
	ft_strmapi.c\
	ft_striteri.c\
	ft_putchar_fd.c\
	ft_putstr_fd.c\
	ft_putendl_fd.c\
	ft_putnbr_fd.c
	
	


	#ft_strtrim.c
	#ft_split.c
	#ft_itoa.c
	#ft_strmapi.c
	#ft_striteri.c
	#ft_putchar_fd.c
	#ft_putstr_fd.c
	#ft_putendl_fd.c
	#ft_putnbr_fd.c

SRCS = $(addprefix $(SRCS_DIR), $(SRC))

SRCS_OBJ = $(SRCS:.c=.o)

HEADER_DIR = ./includes/

#DICT_DIR = ./

CC = cc

CFLAGS = -Wall -Wextra -Werror

#OUTPUT = libft.a

all : clean $(NAME)

$(NAME): $(SRCS_OBJ)
	ar rcs $(NAME) $(SRCS_OBJ)

.c.o:
	$(CC) $(CFLAGS) -I $(HEADER_DIR) -c $< -o $@


#$(OUTPUT) : $(SRCS_OBJ)
#	ar rcs $(OUTPUT) $(SRCS_OBJ)

clean :
	rm -f $(SRCS_OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
