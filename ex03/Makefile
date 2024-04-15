# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/15 18:38:41 by raveriss          #+#    #+#              #
#    Updated: 2024/04/15 18:38:49 by raveriss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Character.cpp Ice.cpp Cure.cpp MateriaSource.cpp
OBJ = $(SRC:.cpp=.o)
EXEC = a.out

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(EXEC)

re: fclean all

.PHONY: all clean fclean re
