# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/11 16:23:09 by raveriss          #+#    #+#              #
#    Updated: 2024/04/15 15:03:59 by raveriss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out
SRCS = main.cpp \
       Animal.cpp \
       Dog.cpp \
       Cat.cpp \
       WrongAnimal.cpp \
       WrongCat.cpp \
       Brain.cpp

OBJS = $(SRCS:.cpp=.o)
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98 -O0

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re