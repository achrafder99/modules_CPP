# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/18 20:08:28 by adardour          #+#    #+#              #
#    Updated: 2023/07/18 20:29:03 by adardour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++ -std=c++98
CXXFLAGS = -Wall -Wextra -std=c++11

TARGET = program
SRCS = main.cpp Harl.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f $(OBJS) $(TARGET)

re: clean all