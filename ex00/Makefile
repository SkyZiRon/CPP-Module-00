# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmelo <bmelo@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/22 17:56:05 by bmelo             #+#    #+#              #
#    Updated: 2026/05/24 13:43:53 by bmelo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++98
SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
		$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
		@printf "\033[32mMEGAPHONE READY !\033[0m\n" "$(NAME)"

%.o : %.cpp
		$(CXX) $(CXXFLAGS) -c $< -o $@

clean :
		rm -f $(OBJ)

fclean : clean
		rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
