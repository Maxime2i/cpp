# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/07 14:27:08 by mlangloi          #+#    #+#              #
#    Updated: 2023/08/07 14:27:09 by mlangloi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ScavTrap
	
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf

all: $(NAME)

$(NAME): 
	@ $(CC) $(FLAGS) main.cpp ClapTrap.cpp ScavTrap.cpp -o $(NAME)

clean:
	@$(RM) $(NAME)

fclean:
	@$(RM) $(NAME)

re: clean all
