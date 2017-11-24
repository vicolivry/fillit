# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: volivry <marvin@le-101.fr>                 +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2017/11/23 15:29:39 by volivry      #+#   ##    ##    #+#        #
#    Updated: 2017/11/23 16:36:46 by volivry     ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

.PHONY: all clean fclean re

CC = gcc $(FLAGS)
FLAGS = -Wall -Wextra -Werror
NAME = fillit
SRC = 
OBJECTS = $(SRC:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) -I. -o $@ -c $<


