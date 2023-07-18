# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/18 08:42:50 by adardour          #+#    #+#              #
#    Updated: 2023/07/18 08:43:24 by adardour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMPILE = c++ -std=c++98
FLAGS = -Wall -Wextra -Werror

TARGET = main

all: $(TARGET)

$(TARGET): $(TARGET).cpp Zombie.cpp zombieHorde.cpp
	$(COMPILE) $(TARGET).cpp Zombie.cpp zombieHorde.cpp $(FLAGS) -o $(TARGET)
 
clean:
	$(RM) $(TARGET)

re:clean all