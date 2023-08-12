# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlangloi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/29 15:53:36 by mlangloi          #+#    #+#              #
#    Updated: 2023/07/29 15:53:37 by mlangloi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Repertoire

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) main.cpp PhoneBook.cpp Contact.cpp -o  $(NAME)

clean:
	$(RM) $(NAME)

fclean:
	$(RM) $(NAME)

re:	fclean all
