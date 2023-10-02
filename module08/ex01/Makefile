# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/21 20:53:47 by adardour          #+#    #+#              #
#    Updated: 2023/09/22 17:33:47 by adardour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ -std=c++98
CFLAGS = -Wall -Wextra -Werror

SRC = main.cpp Span.cpp
 
OBJ = $(SRC:.cpp=.o)

TARGET = span

all: $(TARGET)

$(TARGET): $(OBJ) Span.hpp
	$(CC) $(OBJ) -o $@

.cpp.o: Span.hpp
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

re: clean all