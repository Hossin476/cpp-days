# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lshail <lshail@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/03 16:49:55 by lshail            #+#    #+#              #
#    Updated: 2024/04/16 18:49:01 by lshail           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=PmergeMe

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC =  main.cpp PmergeMe.cpp PmergeMe_Deq.cpp PmergeMe_Vec.cpp

OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)


all: $(NAME)

clean :
	rm -rf *.o

%.o : %.cpp  PmergeMe.hpp
	$(CC) $(FLAGS) -c $< -o $@

fclean :	clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re