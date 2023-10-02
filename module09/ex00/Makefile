# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/21 20:53:47 by adardour          #+#    #+#              #
#    Updated: 2023/09/23 20:28:45 by adardour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ -std=c++98
CFLAGS = -Wall -Wextra -Werror

SRC = main.cpp BitcoinExchange.cpp
 
OBJ = $(SRC:.cpp=.o)

TARGET = btc

all: $(TARGET)

$(TARGET): $(OBJ) 
	$(CC) $(OBJ) -o $@

.cpp.o:
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

re: clean all