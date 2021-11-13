# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: axelcoezard <axelcoezard@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/27 14:02:21 by acoezard          #+#    #+#              #
#    Updated: 2021/11/13 00:19:26 by axelcoezard      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			:=	push_swap

SOURCES			:=	./sources
INCLUDES		:=	./includes
OBJECTS			:=	./bin

LIBFT			:=	./libft

SRCS			:=	push_swap.c \
					ft_puterror.c \
					ft_tab.c \
					ft_stack.c \
					operations/ft_pa.c \
					operations/ft_pb.c \
					operations/ft_ra.c \
					operations/ft_rb.c \
					operations/ft_rr.c \
					operations/ft_rra.c \
					operations/ft_rrb.c \
					operations/ft_rrr.c \
					operations/ft_sa.c \
					operations/ft_sb.c \
					operations/ft_ss.c

OBJS			:=	$(addprefix ${OBJECTS}/, $(SRCS:.c=.o))

CC				:=	gcc
CFLAGS			:=	-Wall -Wextra -Werror
CINCLUDES		:=	-I ${INCLUDES}
CDEPENDENCIES	:=	-L${LIBFT} -lft

BLACK			:=	"\033[1;30m"
RED				:=	"\033[1;31m"
GREEN			:=	"\033[1;32m"
CYAN			:=	"\033[1;35m"
BLUE			:=	"\033[1;36m"
WHITE			:=	"\033[1;37m"
EOC				:=	"\033[0;0m"

${OBJECTS}/%.o: ${SOURCES}/%.c
	@mkdir -p $(dir $@)
	@echo "● Compilation de "$(BLUE)"${notdir $<}"$(EOC)"."
	${CC} ${CFLAGS} -o $@ -c $< ${CINCLUDES}

all: ${NAME}

${NAME}: libft ${OBJS}
	@echo $(GREEN)"● Compilation de ${NAME}..."$(EOC)
	${CC} ${CFLAGS} -o ${NAME} ${OBJS} ${CDEPENDENCIES}

libft:
	@echo $(GREEN)"● Compilation des sources de la Libft..."$(EOC)
	@make -C ${LIBFT}

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
