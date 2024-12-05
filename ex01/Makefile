# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlaporte <mlaporte@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/06 17:02:48 by mlaporte          #+#    #+#              #
#    Updated: 2024/08/06 17:02:48 by mlaporte         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
NAME = phonebook

SRCS = PhoneBook.cpp Contact.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)

INCLUDE = -I.

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) ${INCLUDE} $(OBJS) -o $(NAME)

%.o: %.cpp
	${CC} ${CFLAGS} ${INCLUDE} -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re