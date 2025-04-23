# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/07 17:48:51 by vde-maga          #+#    #+#              #
#    Updated: 2025/04/23 17:22:43 by vde-maga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

PART1 = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	ft_strlcpy.c  ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
	ft_atoi.c ft_calloc.c ft_strdup.c

PART2 = ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
	ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c

BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
	ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
	ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

SRC = ${PART1} ${PART2}

OFILES = ${SRC:.c=.o}
BONUS_OFILES = ${BONUS:.c=.o}

COMPILE = cc -Wall -Wextra -Werror
DELETE = rm -f
INCLUDE = -I .


all: ${NAME}

${NAME}: ${OFILES}
	ar rcs ${NAME} ${OFILES}

%.o: %.c
	${COMPILE} ${INCLUDE} -c $< -o $@

clean:
	${DELETE} ${OFILES} ${BONUS_OFILES} .bonus

fclean: clean
	${DELETE} ${NAME}

re: fclean all

bonus: .bonus

.bonus: ${OFILES} ${BONUS_OFILES}
	ar rcs ${NAME} ${OFILES} ${BONUS_OFILES}
	touch .bonus

.PHONY: all clean fclean re
