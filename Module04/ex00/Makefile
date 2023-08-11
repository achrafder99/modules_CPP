# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/08 10:54:35 by adardour          #+#    #+#              #
#    Updated: 2023/08/08 14:20:35 by adardour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = c++ -std=c++98
CFLAGS = -Wall -Wextra -Werror

SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongCat.cpp WrongAnimal.cpp

OBJ = $(SRC:.cpp=.o)

TARGET = animal

all:  $(TARGET) Animal.hpp Dog.hpp Cat.hpp WrongCat.hpp WrongAnimal.hpp

$(TARGET): Animal.hpp Dog.hpp Cat.hpp WrongCat.hpp WrongAnimal.hpp $(OBJ) 
	$(CC) $(CFLAGS) $(OBJ) -o $@

.cpp.o: Animal.hpp Dog.hpp Cat.hpp WrongCat.hpp WrongAnimal.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

re: clean all