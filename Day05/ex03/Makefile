# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lshail <lshail@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/30 15:12:29 by lshail            #+#    #+#              #
#    Updated: 2023/12/03 18:16:12 by lshail           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=Intern

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 

SRC =  AForm.cpp main.cpp Bureaucrat.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp  Intern.cpp 

OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)


all: $(NAME)

clean :
	rm -rf *.o

%.o : %.cpp  Bureaucrat.hpp ShrubberyCreationForm.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp AForm.hpp Intern.hpp
	$(CC) $(FLAGS) -c $< -o $@

fclean :	clean
	rm -rf $(NAME)
	rm -rf *_shrubbery

re : fclean all

.PHONY: all clean fclean re