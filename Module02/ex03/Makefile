# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/04 20:27:21 by adardour          #+#    #+#              #
#    Updated: 2023/08/04 20:34:38 by adardour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ -std=c++98
CFLAGS = -Wall -Wextra -Werror

SRC = main.cpp Fixed.cpp bsp.cpp Point.cpp

OBJ = $(SRC:.cpp=.o)

TARGET = fixed

all: $(TARGET) Fixed.hpp Point.hpp

$(TARGET): Fixed.hpp Point.hpp $(OBJ) 
	$(CC) $(CFLAGS) $(OBJ) -o $@

.cpp.o: Fixed.hpp Point.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

re: clean all