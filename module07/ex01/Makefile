# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/21 20:53:47 by adardour          #+#    #+#              #
#    Updated: 2023/09/21 21:30:49 by adardour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ -std=c++11
CFLAGS = -Wall -Wextra -Werror

SRC = main.cpp 

OBJ = $(SRC:.cpp=.o)

TARGET = iter

all: $(TARGET)

$(TARGET): $(OBJ) iter.hpp
	$(CC) $(OBJ) -o $@

.cpp.o: iter.hpp
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

re: clean all