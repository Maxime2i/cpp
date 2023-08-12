# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/31 17:08:05 by mlangloi          #+#    #+#              #
#    Updated: 2023/07/31 17:08:06 by mlangloi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = acccount

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) tests.cpp Account.cpp -o  $(NAME)

clean:
	$(RM) $(NAME)

fclean:
	$(RM) $(NAME)

re:	fclean all
