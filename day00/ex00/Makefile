# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vkorniie <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/01 13:30:14 by vkorniie          #+#    #+#              #
#    Updated: 2018/10/01 13:30:17 by vkorniie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = g++
FLAGS = -Wall -Wextra -Werror

SRCS = megaphone.cpp
OBJ = $(addprefix $(OBJ_DIR), $(SRCS:.cpp=.o))

OBJ_DIR = ./objects/
SRC_DIR = ./srcs/

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@tput setaf 2; echo made

$(OBJ): | $(OBJ_DIR)

$(OBJ_DIR):
	@mkdir $(OBJ_DIR)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	@$(CC) -c $< -o $@ $(FLAGS)

clean:
	@rm -f $(OBJ)
	@tput setaf 4; echo cleaned

fclean: clean
	@rm -f $(NAME)
	@rm -rf $(OBJ_DIR)
	@tput setaf 1; echo fcleaned

re: fclean all
