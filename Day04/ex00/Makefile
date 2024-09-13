# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lshail <lshail@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/13 13:46:29 by lshail            #+#    #+#              #
#    Updated: 2023/11/21 16:26:44 by lshail           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=Animal

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Animal.cpp  Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp

OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)


all: $(NAME)

clean :
	rm -rf *.o

%.o : %.cpp Animal.hpp  Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp
	$(CC) $(FLAGS) -c $< -o $@

fclean :	clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re