# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lshail <lshail@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/04 13:53:39 by lshail            #+#    #+#              #
#    Updated: 2023/12/07 17:24:49 by lshail           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=convert

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 

SRC =  main.cpp ScalarConverter.cpp

OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)


all: $(NAME)

clean :
	rm -rf *.o

%.o : %.cpp  ScalarConverter.hpp
	$(CC) $(FLAGS) -c $< -o $@

fclean :	clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re