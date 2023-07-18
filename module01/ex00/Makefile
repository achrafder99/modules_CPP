# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/17 22:19:00 by adardour          #+#    #+#              #
#    Updated: 2023/07/17 22:50:30 by adardour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMPILE = c++ -std=c++98
FLAGS = -Wall -Wextra -Werror

TARGET = main

all: $(TARGET)

$(TARGET): $(TARGET).cpp Zombie.cpp newZombie.cpp randomChump.cpp
	$(COMPILE) $(TARGET).cpp Zombie.cpp newZombie.cpp randomChump.cpp $(FLAGS) -o $(TARGET)
 
clean:
	$(RM) $(TARGET)

re:clean all