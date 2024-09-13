# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lshail <lshail@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/24 16:42:54 by lshail            #+#    #+#              #
#    Updated: 2023/10/27 18:13:01 by lshail           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME=harlFilter

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Harl.cpp

OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

all: $(NAME)

clean :
	rm -rf *.o

%.o : %.cpp Harl.hpp 
	$(CC) $(FLAGS) -c $< -o $@

fclean :	clean
	rm -rf $(NAME)

re : fclean all
