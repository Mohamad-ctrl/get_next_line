# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mosharif <mohamad42acc@gmail.com>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/14 17:09:58 by mosharif          #+#    #+#              #
#    Updated: 2022/07/14 17:10:01 by mosharif         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_itoa.c ft_strmapi.c ft_striteri.c ft_memchr.c ft_strtrim.c ft_substr.c ft_strjoin.c ft_split.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c ft_strrchr.c ft_memmove.c ft_memset.c ft_strlcpy.c ft_strnstr.c ft_strdup.c ft_memccpy.c ft_tolower.c ft_memcmp.c ft_memcpy.c ft_toupper.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_isalnum.c ft_atoi.c ft_bzero.c ft_calloc.c ft_isalpha.c ft_memcpy.c ft_strchr.c ft_strlcat.c ft_strlen.c ft_strncmp.c ft_strnstr.c
bonus = ft_lstnew.c ft_lstsize.c ft_lstlast.c ft_lstmap.c ft_lstiter.c ft_lstadd_front.c ft_lstadd_back.c ft_lstclear.c ft_lstdelone.c
OBJ = $(SRC:.c=.o)
bonus-obj = $(bonus:.c=.o)


$(NAME):$(OBJ)
	ar rcs $(NAME) $(OBJ)
all: $(NAME)
bonus: $(NAME) $(bonus-obj)
	ar rcs $(NAME) $(bonus-obj)
clean:
	rm -rf *.o
fclean:
	rm -rf $(OBJ) $(NAME) $(bonus-obj)
re:	clean all
