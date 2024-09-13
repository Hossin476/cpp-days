# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lshail <lshail@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/05 14:32:43 by lshail            #+#    #+#              #
#    Updated: 2023/11/21 10:30:33 by lshail           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=DiamondTrap

CC = c++

FLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow  -std=c++98

SRC = main.cpp FragTrap.cpp  ScavTrap.cpp ClapTrap.cpp DiamondTrap.cpp

OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)


all: $(NAME)

clean :
	rm -rf *.o

%.o : %.cpp DiamondTrap.hpp
	$(CC) $(FLAGS) -c $< -o $@

fclean :	clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re