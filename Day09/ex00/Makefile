# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lshail <lshail@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/03 16:49:41 by lshail            #+#    #+#              #
#    Updated: 2024/01/03 16:49:41 by lshail           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=btc

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC =  main.cpp BitcoinExchange.cpp

OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)


all: $(NAME)

clean :
	rm -rf *.o

%.o : %.cpp  BitcoinExchange.hpp
	$(CC) $(FLAGS) -c $< -o $@

fclean :	clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re