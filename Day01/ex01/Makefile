# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lshail <lshail@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/24 16:42:33 by lshail            #+#    #+#              #
#    Updated: 2023/10/25 14:09:34 by lshail           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=zombieHorde

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 

SRC = main.cpp zombieHorde.cpp Zombie.cpp

OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

all: $(NAME)

clean :
	rm -rf *.o

%.o : %.cpp Zombie.hpp 
	$(CC) $(FLAGS) -c $< -o $@

fclean :	clean
	rm -rf $(NAME)

re : fclean all
