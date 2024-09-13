# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lshail <lshail@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/11 17:29:21 by lshail            #+#    #+#              #
#    Updated: 2023/10/13 15:06:28 by lshail           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=PhoneBook

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = PhoneBook.cpp main.cpp Contact.cpp

OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

all: $(NAME)

clean :
	rm -rf *.o

%.o : %.cpp PhoneBook.hpp Contact.hpp
	$(CC) $(FLAGS) -c $< -o $@

fclean :	clean
	rm -rf $(NAME)

re : fclean all
