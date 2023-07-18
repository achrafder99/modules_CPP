# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/17 15:40:47 by adardour          #+#    #+#              #
#    Updated: 2023/07/17 15:41:57 by adardour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMPILE = c++ -std=c++98
FLAGS = -Wall -Wextra -Werror

TARGET = main

all: $(TARGET)

$(TARGET): $(TARGET).cpp PhoneBook.cpp Contact.cpp
	$(COMPILE) $(TARGET).cpp PhoneBook.cpp Contact.cpp $(FLAGS) -o $(TARGET)
 
clean:
	$(RM) $(TARGET)

re:clean all