# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/21 18:36:07 by adardour          #+#    #+#              #
#    Updated: 2023/09/21 18:51:44 by adardour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ -std=c++11
CFLAGS = -Wall -Wextra -Werror

SRC = main.cpp 

OBJ = $(SRC:.cpp=.o)

TARGET = template

all: $(TARGET)

$(TARGET): $(OBJ) whatever.hpp
	$(CC) $(OBJ) -o $@

.cpp.o: whatever.hpp
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

re: clean all