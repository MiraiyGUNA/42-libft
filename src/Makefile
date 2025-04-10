# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/07 17:48:51 by vde-maga          #+#    #+#              #
#    Updated: 2025/04/10 13:22:24 by vde-maga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

PART1 = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	ft_strlcpy.c  ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
	ft_atoi.c ft_calloc.c ft_strdup.c

PART2 = ft_substr.c ft_strjoin.c

BONUS = 

SRC = ${PART1} ${PART2}

OFILES = ${SRC:.c=.o}
BONUS_OBJS = ${BONUS:.c=.o}

COMPILE = cc -Wall -Wextra -Werror
DELETE = rm -f
INCLUDE = -I .

${NAME}: ${OFILES}
	ar rcs ${NAME} ${OFILES}

all: ${NAME}

.o: .c
	${COMPILE} ${INCLUDE} -c 

clean:
	${DELETE} ${OFILES}

fclean: clean
	${DELETE} ${NAME}

re: fclean all

.PHONY: all clean fclean re
