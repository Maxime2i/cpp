# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/14 17:30:52 by mlangloi          #+#    #+#              #
#    Updated: 2023/09/14 17:30:53 by mlangloi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= identify
	
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf

all: $(NAME)

$(NAME): 
	@ $(CC) $(FLAGS) main.cpp Base.cpp A.cpp B.cpp C.cpp -o $(NAME)

clean:
	@$(RM) $(NAME)

fclean:
	@$(RM) $(NAME)

re: clean all
