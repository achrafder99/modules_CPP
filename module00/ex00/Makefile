# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/16 17:22:35 by adardour          #+#    #+#              #
#    Updated: 2023/07/16 17:49:04 by adardour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMPILE = c++ -std=c++98
FLAGS = -Wall -Wextra -Werror

TARGET = megaphone

all: $(TARGET)

$(TARGET): $(TARGET).cpp
	$(COMPILE) $(TARGET).cpp $(FLAGS) -o $(TARGET)
 
clean:
	$(RM) $(TARGET)

re:clean all