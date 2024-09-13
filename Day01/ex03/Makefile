# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lshail <lshail@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/24 16:37:45 by lshail            #+#    #+#              #
#    Updated: 2023/10/25 16:25:13 by lshail           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=Violence

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp  

OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

all: $(NAME)

clean :
	rm -rf *.o

%.o : %.cpp Weapon.hpp HumanA.hpp HumanB.hpp 
	$(CC) $(FLAGS) -c $< -o $@

fclean :	clean
	rm -rf $(NAME)

re : fclean all
