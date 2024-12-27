#/* ************************************************************************** */
#/*                                                                            */
#/*                                                        :::      ::::::::   */
#/*   Makefile                                           :+:      :+:    :+:   */
#/*                                                    +:+ +:+         +:+     */
#/*   By: hcorcuer <hcorcuer@student.42.fr>          +#+  +:+       +#+        */
#/*                                                +#+#+#+#+#+   +#+           */
#/*   Created: 2024/11/29 17:11:21 by hcorcuer          #+#    #+#             */
#/*   Updated: 2024/11/29 19:47:07 by hcorcuer         ###   ########.fr       */
#/*                                                                            */
#/* ************************************************************************** */

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
	ft_calloc.c
	#ft_strdup.c

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
