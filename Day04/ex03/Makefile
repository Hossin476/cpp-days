# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lshail <lshail@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/21 16:30:35 by lshail            #+#    #+#              #
#    Updated: 2023/11/26 22:30:46 by lshail           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME=Interface

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 

SRC = main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp

OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)


all: $(NAME)

clean :
	rm -rf *.o

%.o : %.cpp AMateria.hpp Character.hpp Cure.hpp Ice.hpp ICharacter.hpp IMateriaSource.hpp MateriaSource.hpp
	$(CC) $(FLAGS) -c $< -o $@

fclean :	clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re