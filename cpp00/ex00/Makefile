# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/28 14:40:48 by mlangloi          #+#    #+#              #
#    Updated: 2023/07/28 14:49:35 by mlangloi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) megaphone.cpp -o  $(NAME)

clean:
	$(RM) $(NAME)

fclean:
	$(RM) $(NAME)

re:	fclean all
