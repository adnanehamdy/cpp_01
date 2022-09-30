# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahamdy <ahamdy@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/28 09:47:15 by ahamdy            #+#    #+#              #
#    Updated: 2022/09/28 11:01:51 by ahamdy           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Zombie

SRCS = Zombie.cpp zombieHorde.cpp main.cpp 
all : $(NAME)

$(NAME) : $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o Zombie

clean :
	rm -rf $(NAME)

fclean : clean

re : fclean all

.PHONY : fclean clean all