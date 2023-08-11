# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/06 17:11:52 by adardour          #+#    #+#              #
#    Updated: 2023/08/07 15:05:49 by adardour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ -std=c++98
CFLAGS = -Wall -Wextra -Werror

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

OBJ = $(SRC:.cpp=.o)

TARGET = frag

all:  $(TARGET) ClapTrap.hpp ScavTrap.hpp FragTrap.hpp

$(TARGET): ClapTrap.hpp ScavTrap.hpp FragTrap.hpp $(OBJ) 
	$(CC) $(CFLAGS) $(OBJ) -o $@

.cpp.o: ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

re: clean all