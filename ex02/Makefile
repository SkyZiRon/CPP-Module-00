# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmelo <bmelo@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/24 16:39:05 by bmelo             #+#    #+#              #
#    Updated: 2026/05/24 16:39:42 by bmelo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = The_Job_of_Your_Dreams
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++98
SRC = tests.cpp Account.cpp
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
		$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
		@printf "\033[32mPHONEBOOK IS READY !\033[0m\n" "$(NAME)"

%.o : %.cpp
		$(CXX) $(CXXFLAGS) -c $< -o $@

clean :
		rm -f $(OBJ)

fclean : clean
		rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
