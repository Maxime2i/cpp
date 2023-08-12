# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/02 17:21:20 by mlangloi          #+#    #+#              #
#    Updated: 2023/08/02 17:21:21 by mlangloi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Zombie
	
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf

all: $(NAME)

$(NAME): 
	@ $(CC) $(FLAGS) main.cpp Zombie.cpp zombieHorde.cpp -o $(NAME)

clean:
	@$(RM) $(NAME)

fclean:
	@$(RM) $(NAME)

re: clean all
