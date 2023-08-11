# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/31 18:37:58 by adardour          #+#    #+#              #
#    Updated: 2023/08/01 17:41:07 by adardour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account
EXECUTABLE = account

SRCS = tests.cpp Account.cpp
CC = c++ -std=c++98
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror

OBJS = ${SRCS:%.cpp=%.o}

all: ${NAME}

%.o:%.c ${OBJS} Account.cpp Account.hpp
	${CC} ${CFLAGS} -c $< -o ${<:%.c=%.o}

$(NAME): ${OBJS} Account.hpp
	${CC} ${CFLAGS} ${OBJS} -o ${EXECUTABLE}

clean:
	${RM} ${OBJS} ${OBJSBONUS}

fclean: clean
	${RM} ${NAME}
	${RM} ${BONUS_EXECUTABLE}

re: fclean all