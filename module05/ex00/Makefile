# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/18 18:55:36 by adardour          #+#    #+#              #
#    Updated: 2023/09/27 19:42:26 by adardour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ -std=c++98
CFLAGS = -Wall -Wextra -Werror

SRC = main.cpp Bureaucrat.cpp

OBJ = $(SRC:.cpp=.o)

TARGET = Bureaucrat

all: $(TARGET)

$(TARGET): $(OBJ) Bureaucrat.hpp
	$(CC) $(OBJ) -o $@

.cpp.o: Bureaucrat.hpp
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

re: clean all