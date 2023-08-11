# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/10 12:04:12 by adardour          #+#    #+#              #
#    Updated: 2023/08/10 17:57:41 by adardour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ -std=c++98
CFLAGS = -Wall -Wextra -Werror

SRC = main.cpp AMateria.cpp Ice.cpp Cure.cpp Character.cpp MateriaSource.cpp

OBJ = $(SRC:.cpp=.o)

TARGET = amateria

all:  $(TARGET)  AMateria.hpp Ice.hpp Cure.hpp MateriaSource.hpp IMateriaSource.hpp ICharacter.hpp Character.hpp

$(TARGET): AMateria.hpp Ice.hpp Cure.hpp MateriaSource.hpp IMateriaSource.hpp ICharacter.hpp Character.hpp $(OBJ) 
	$(CC) $(CFLAGS) $(OBJ) -o $@

.cpp.o: AMateria.hpp Ice.hpp Cure.hpp MateriaSource.hpp IMateriaSource.hpp ICharacter.hpp Character.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

re: clean all