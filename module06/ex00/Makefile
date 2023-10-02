# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/18 18:55:36 by adardour          #+#    #+#              #
#    Updated: 2023/09/20 02:17:11 by adardour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ -std=c++11
CFLAGS = -Wall -Wextra -Werror

SRC = main.cpp ScalarConverter.cpp

OBJ = $(SRC:.cpp=.o)

TARGET = converter

all: $(TARGET)

$(TARGET): $(OBJ) ScalarConverter.hpp
	$(CC) $(OBJ) -o $@

.cpp.o: ScalarConverter.hpp
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

re: clean all