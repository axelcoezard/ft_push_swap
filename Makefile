# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acoezard <acoezard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/27 14:02:21 by acoezard          #+#    #+#              #
#    Updated: 2021/10/27 16:16:37 by acoezard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			:=	push_swap

SOURCES			:=	./sources
OBJECTS			:=	./bin
INCLUDES		:=	./includes

LIBFT			:=	./libft
LIBFT_INCLUDES	:= ${LIBFT}/includes

SRCS			:=	push_swap.c
OBJS			:=	$(addprefix ${OBJECTS}/, $(SRCS:.c=.o))

CC				:=	gcc
CFLAGS			:=	-Wall -Wextra -Werror
CINCLUDES		:=	-I ${INCLUDES} -I ${LIBFT_INCLUDES}
CDEPENDENCIES	:=	-L ${LIBFT} -lft

BLACK			:=	"\033[1;30m"
RED				:=	"\033[1;31m"
GREEN			:=	"\033[1;32m"
CYAN			:=	"\033[1;35m"
BLUE			:=	"\033[1;36m"
WHITE			:=	"\033[1;37m"
EOC				:=	"\033[0;0m"

${OBJECTS}/%.o: ${SOURCES}/%.c
	@mkdir -p $(dir $@)
	@echo "● Compilation de "$(BLUE)"$<"$(EOC)" dans "$(BLUE)"$@"$(EOC)
	@${CC} ${CFLAGS} ${CINCLUDES} -o $@ -c $< ${CDEPENDENCIES}

${NAME}: libft ${OBJS}
	@echo $(GREEN)"● Compilation de ${NAME}..."$(EOC)
	@${CC} ${CFLAGS} ${NAME} -o ${OBJS} ${CDEPENDENCIES}

libft:
	@echo $(GREEN)"● Compilation des sources de la Libft..."$(EOC)
	@make -C ${LIBFT}

all: ${NAME}

clean:
	@echo ${GREEN}"● Supression des fichiers binaires (.o)..."$(EOC)
	@make -C ${LIBFT} clean
	@rm -rf ${OBJECTS}

fclean: clean
	@echo ${GREEN}"● Supression des executables et librairies..."$(EOC)
	@make -C ${LIBFT} fclean
	@rm -f ${NAME}

re: fclean all

.PHONY:	all libft clean fclean re
