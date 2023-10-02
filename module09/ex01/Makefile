# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/26 16:10:48 by adardour          #+#    #+#              #
#    Updated: 2023/09/26 17:15:18 by adardour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ -std=c++98
CFLAGS = -Wall -Wextra -Werror

SRC = main.cpp RPN.cpp
 
OBJ = $(SRC:.cpp=.o)

TARGET = RPN

all: $(TARGET)

$(TARGET): $(OBJ) RPN.hpp
	$(CC) $(OBJ) -o $@

.cpp.o:RPN.hpp
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

re: clean all