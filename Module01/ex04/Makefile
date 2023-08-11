# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/18 11:46:26 by adardour          #+#    #+#              #
#    Updated: 2023/08/02 19:00:21 by adardour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ -std=c++98
CFLAGS = -Wall -Wextra -Werror

SRC = main.cpp Replace.cpp

OBJ = $(SRC:.cpp=.o)

TARGET = replace

all: $(TARGET)

$(TARGET): $(OBJ) Replace.hpp
	$(CC) $(CFLAGS) $(OBJ) -o $@

.cpp.o: Replace.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

re: clean all