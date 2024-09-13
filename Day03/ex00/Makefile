# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lshail <lshail@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/05 14:32:27 by lshail            #+#    #+#              #
#    Updated: 2023/11/05 14:45:15 by lshail           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=ClapTrap

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp ClapTrap.cpp 

OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)


all: $(NAME)

clean :
	rm -rf *.o

%.o : %.cpp ClapTrap.hpp
	$(CC) $(FLAGS) -c $< -o $@

fclean :	clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re