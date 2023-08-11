# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/31 16:08:56 by adardour          #+#    #+#              #
#    Updated: 2023/08/01 17:40:51 by adardour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
EXECUTABLE = phonebook

SRCS = main.cpp Contact.cpp PhoneBook.cpp utils_phone.cpp
CC = c++ -std=c++98
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror

OBJS = ${SRCS:%.cpp=%.o}

all: ${NAME}

%.o:%.c ${OBJS} utils_phone.h PhoneBook.hpp Contact.hpp
	${CC} -c $< -o ${<:%.c=%.o}

$(NAME): ${OBJS} utils_phone.h PhoneBook.hpp Contact.hpp
	${CC} ${OBJS} -o ${EXECUTABLE}

clean:
	${RM} ${OBJS} ${OBJSBONUS}

fclean: clean
	${RM} ${NAME}
	${RM} ${BONUS_EXECUTABLE}

re: fclean all