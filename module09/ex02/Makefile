# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/26 16:10:48 by adardour          #+#    #+#              #
#    Updated: 2023/09/30 22:09:43 by adardour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ -std=c++98
CFLAGS = -Wall -Wextra -Werror

SRC = main.cpp PmergeMe.cpp
 
OBJ = $(SRC:.cpp=.o)

TARGET = PmergeMe

all: $(TARGET)

$(TARGET): $(OBJ) PmergeMe.hpp
	$(CC) $(OBJ) -o $@

.cpp.o:PmergeMe.hpp
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

re: clean all