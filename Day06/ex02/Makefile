# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lshail <lshail@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/04 14:12:27 by lshail            #+#    #+#              #
#    Updated: 2023/12/11 11:39:01 by lshail           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=dynamic

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 

SRC =  main.cpp Base.cpp A.cpp B.cpp C.cpp 

OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)


all: $(NAME)

clean :
	rm -rf *.o

%.o : %.cpp  Base.hpp A.hpp B.hpp C.hpp
	$(CC) $(FLAGS) -c $< -o $@

fclean :	clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re