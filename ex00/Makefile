# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahamdy <ahamdy@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/28 09:47:15 by ahamdy            #+#    #+#              #
#    Updated: 2022/09/28 10:23:04 by ahamdy           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Zombie

SRCS = Zombie.cpp randomChump.cpp main.cpp newZombie.cpp
all : $(NAME)

$(NAME) : $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o Zombie

clean :
	rm -rf $(NAME)

fclean : clean

re : fclean all

.PHONY : fclean clean all