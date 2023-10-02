# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/21 20:53:47 by adardour          #+#    #+#              #
#    Updated: 2023/09/28 16:46:46 by adardour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ -std=c++11
CFLAGS = -Wall -Wextra -Werror

SRC = main.cpp 

OBJ = $(SRC:.cpp=.o)

TARGET = Array

all: $(TARGET)

$(TARGET): $(OBJ) Array.hpp
	$(CC) $(OBJ) -o $@

.cpp.o: Array.hpp
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

re: clean all