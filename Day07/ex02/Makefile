# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lshail <lshail@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/12 15:05:18 by lshail            #+#    #+#              #
#    Updated: 2023/12/14 14:54:30 by lshail           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=Array

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 

SRC =  main.cpp 

OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)


all: $(NAME)

clean :
	rm -rf *.o

%.o : %.cpp  Array.hpp
	$(CC) $(FLAGS) -c $< -o $@

fclean :	clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re