# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile-Program                                   :+:    :+:             #
#                                                      +:+                     #
#    By: rmaes <rmaes@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2022/06/13 17:19:52 by rmaes         #+#    #+#                  #
#    Updated: 2022/12/15 17:16:31 by rmaes         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #


#Colors

DEFAULT = \033[0;39m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m

SOURCES_DIR = sources/
FILES =	
SOURCES = $(addprefix $(SOURCES_DIR), $(FILES))

OBJECTS_DIR = objects/
OBJECTS = $(addprefix $(OBJECTS_DIR), $(FILES:.c=.o))

CFLAGS = -Wall -Wextra -Werror
CC = gcc
NAME = 

all: $(NAME)

$(NAME): $(OBJECTS)
	@echo "compiling: $(YELLOW)creating executable$(DEFAULT)"
	@gcc -o $@ $^
	@echo "$(GREEN)$@ successfully compiled!"

$(OBJECTS_DIR):
	mkdir objects

$(OBJECTS_DIR)%.o: $(SOURCES_DIR)%.c
	@mkdir -p $(@D)
	@echo "compiling: $(YELLOW)$@$(DEFAULT)"
	@$(CC) -c $(CFLAGS) -o $@ $^

clean:
	@echo "cleaning:  $(RED)removing object files$(DEFAULT)"
	@rm -f $(OBJECTS)

fclean: clean
	@echo "cleaning:  $(RED)removing compiled library$(DEFAULT)"
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
