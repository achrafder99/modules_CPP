# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/18 11:40:09 by adardour          #+#    #+#              #
#    Updated: 2023/07/18 11:40:36 by adardour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMPILE = c++ -std=c++98
FLAGS = -Wall -Wextra -Werror

TARGET = main

all: $(TARGET)

$(TARGET): $(TARGET).cpp HumanB.cpp Weapon.cpp HumanA.cpp
	$(COMPILE) $(TARGET).cpp HumanB.cpp Weapon.cpp HumanA.cpp $(FLAGS) -o $(TARGET)
 
clean:
	$(RM) $(TARGET)

re:clean all