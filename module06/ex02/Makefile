# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/20 18:40:24 by adardour          #+#    #+#              #
#    Updated: 2023/09/21 17:16:22 by adardour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ -std=c++11
CFLAGS = -Wall -Wextra -Werror

SRC = main.cpp utils.cpp Base.cpp

OBJ = $(SRC:.cpp=.o)

TARGET = dynamic_cast

all: $(TARGET)

$(TARGET): $(OBJ) Base.hpp A.hpp B.hpp C.hpp utils.hpp
	$(CC) $(OBJ) -o $@

.cpp.o: Base.hpp A.hpp B.hpp C.hpp utils.hpp
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

re: clean all