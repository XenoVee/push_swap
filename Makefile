# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rmaes <rmaes@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2022/06/13 17:19:52 by rmaes         #+#    #+#                  #
#    Updated: 2023/01/30 17:14:20 by rmaes         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #


#Colors

DEFAULT = \033[0;39m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m

SOURCES_DIR = sources/
FILES =	push_swap.c parsing.c utils.c index.c\
		swaps.c rotate.c reverse_rotate.c push.c
SOURCES = $(addprefix $(SOURCES_DIR), $(FILES))

OBJECTS_DIR = objects/
OBJECTS = $(addprefix $(OBJECTS_DIR), $(FILES:.c=.o))

CDL_LIST = cdl_list/cdl_list.a

LIBFT = libftprintf/libft.a

CFLAGS = -Wall -Wextra -Werror
CC = gcc
NAME = push_swap
TEST = test

all: $(NAME)

$(TEST): $(OBJECTS) $(CDL_LIST) $(LIBFT)
	$(CC) -g -o $@ $^

$(NAME): $(OBJECTS) $(CDL_LIST) $(LIBFT)
	@echo "compiling: $(YELLOW)creating executable$(DEFAULT)"
	@gcc -o $@ $^
	@echo "$(GREEN)$@ successfully compiled!$(DEFAULT)"

$(LIBFT):
	@make -C libftprintf

$(CDL_LIST):
	@make -C cdl_list

$(OBJECTS_DIR):
	mkdir objects

$(OBJECTS_DIR)%.o: $(SOURCES_DIR)%.c
	@mkdir -p $(@D)
	@echo "compiling: $(YELLOW)$@$(DEFAULT)"
	@$(CC) -c $(CFLAGS) -o $@ $^

clean:
	@echo "cleaning:  $(RED)removing $(NAME) object files$(DEFAULT)"
	@make clean -C cdl_list
	@make clean -C libftprintf
	@rm -f $(OBJECTS)

fclean: clean
	@echo "cleaning:  $(RED)removing $(NAME)$(DEFAULT)"
	@make rmlib -C cdl_list
	@make rmlib -C libftprintf
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
