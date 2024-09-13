# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lshail <lshail@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/04 14:12:15 by lshail            #+#    #+#              #
#    Updated: 2023/12/11 19:12:17 by lshail           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=Serializer

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 

SRC =  main.cpp Serializer.cpp 

OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)


all: $(NAME)

clean :
	rm -rf *.o

%.o : %.cpp  Serializer.hpp Data.hpp
	$(CC) $(FLAGS) -c $< -o $@

fclean :	clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re