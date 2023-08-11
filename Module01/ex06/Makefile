# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/18 20:08:28 by adardour          #+#    #+#              #
#    Updated: 2023/08/02 18:59:38 by adardour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ -std=c++98
CFLAGS = -Wall -Wextra -Werror

SRC = main.cpp Harl.cpp

OBJ = $(SRC:.cpp=.o)

TARGET = harl

all: $(TARGET)

$(TARGET): $(OBJ) Harl.hpp
	$(CC) $(CFLAGS) $(OBJ) -o $@

.cpp.o: Harl.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

re: clean all