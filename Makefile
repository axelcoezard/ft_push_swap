# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/27 14:02:21 by acoezard          #+#    #+#              #
#    Updated: 2021/10/27 15:18:55 by acoezard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			:=	push_swap

SOURCES			:=	./sources
INCLUDES		:=	./includes
LIBFT			:=	./libft
BINARIES		:=	./bin

SRCS			:=	push_swap.c

OBJS			:=	$(addprefix ${BINARIES}/, $(SRCS:.c=.o))

CC				:=	gcc
CFLAGS			:=	-Wall -Wextra -Werror -I ${INCLUDES}
CDEPENDENCIES	:=	-L ${LIBFT} -lft

${BINARIES}/%.o: ${SOURCES}/%.c
	@mkdir -p $(dir $@)
	${CC} ${CFLAGS} $^ -o $@ ${CDEPENDENCIES}

${NAME}: libft ${OBJS}
	${CC} ${CFLAGS} -o ${NAME} ${OBJS}

libft:
	@echo "● Compilation des sources de la Libft..."
	@make -C ${LIBFT}

all: ${NAME}

clean:
	@echo "● Supression des fichiers binaires (.o)..."
	@make -C ${LIBFT} clean
	@rm -f ${OBJS}

fclean: clean
	@echo "● Supression des executables et librairies..."
	@make -C ${LIBFT} fclean
	@rm -f ${NAME}

re: fclean all

.PHONY:	all libft clean fclean re
