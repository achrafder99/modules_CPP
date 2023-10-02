# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/21 20:53:47 by adardour          #+#    #+#              #
#    Updated: 2023/09/29 17:14:33 by adardour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ -std=c++98
CFLAGS = -Wall -Wextra -Werror

SRC = main.cpp
 
OBJ = $(SRC:.cpp=.o)

TARGET = MutantStack

all: $(TARGET)

$(TARGET): $(OBJ) MutantStack.hpp
	$(CC) $(OBJ) -o $@

.cpp.o: MutantStack.hpp
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

re: clean all