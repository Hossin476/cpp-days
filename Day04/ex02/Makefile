# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lshail <lshail@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/13 13:47:08 by lshail            #+#    #+#              #
#    Updated: 2023/11/28 13:06:21 by lshail           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=Abstract

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Animal.cpp  Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)


all: $(NAME)

clean :
	rm -rf *.o

%.o : %.cpp Animal.hpp  Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp
	$(CC) $(FLAGS) -c $< -o $@

fclean :	clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re