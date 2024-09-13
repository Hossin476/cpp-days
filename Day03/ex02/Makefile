# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lshail <lshail@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/05 14:32:38 by lshail            #+#    #+#              #
#    Updated: 2023/11/10 14:58:33 by lshail           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=FragTrap

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp FragTrap.cpp  ScavTrap.cpp ClapTrap.cpp

OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)


all: $(NAME)

clean :
	rm -rf *.o

%.o : %.cpp FragTrap.hpp
	$(CC) $(FLAGS) -c $< -o $@

fclean :	clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re