# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lshail <lshail@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/05 14:32:33 by lshail            #+#    #+#              #
#    Updated: 2023/11/07 13:44:43 by lshail           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=ScavTrap

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp ScavTrap.cpp ClapTrap.cpp

OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)


all: $(NAME)

clean :
	rm -rf *.o

%.o : %.cpp ScavTrap.hpp
	$(CC) $(FLAGS) -c $< -o $@

fclean :	clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re