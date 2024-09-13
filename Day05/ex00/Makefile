# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lshail <lshail@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/29 18:53:21 by lshail            #+#    #+#              #
#    Updated: 2023/11/29 18:54:33 by lshail           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME=Bureaucrat

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 

SRC = main.cpp Bureaucrat.cpp

OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)


all: $(NAME)

clean :
	rm -rf *.o

%.o : %.cpp  Bureaucrat.hpp
	$(CC) $(FLAGS) -c $< -o $@

fclean :	clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re