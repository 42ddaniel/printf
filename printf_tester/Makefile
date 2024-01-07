# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddaniel- <ddaniel-@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/04 21:13:05 by ddaniel-          #+#    #+#              #
#    Updated: 2023/11/28 20:53:06 by ddaniel-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= libftprintf.a
INCLUDE 		= ft_printf.h
SRC				= ./files
CFLAGS			= -Wall -Wextra -Werror -g -I./include
CC				= gcc
FLAGLIB			= -rcs
RM				= /bin/rm -f

LIBFT_DIR		= ./libft
LIBFT			= ./libft/libft.a

FT_PRINTF		= ft_printf_funcs.c ft_printf_hex.c ft_printf_ptr.c ft_printf_u.c ft_printf.c 
OBJECTS			= $(FT_PRINTF:.c=.o)

TEST_NAME		= teste_printf
TEST_SRC		= main.c
TEST_OBJECTS	= $(TEST_SRC:.c=.o)

all: $(NAME)

$(NAME): $(LIBFT) $(OBJECTS)
	@echo "Linking $(NAME)"
	@cp $(LIBFT) $(NAME)
	@ar $(FLAGLIB) $(NAME) $(OBJECTS)
	@ranlib $(NAME)

$(LIBFT): $(LIBFT_DIR)
	@echo "Compiling libft"
	@$(MAKE) -C $(LIBFT_DIR)

%.o: $(SRC)/%.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiling $<"

$(TEST_NAME): $(NAME) $(TEST_OBJECTS)
	@echo "Linking $(TEST_NAME)"
	@$(CC) $(CFLAGS) -o $(TEST_NAME) $(TEST_OBJECTS) -L. -lftprintf

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiling $<"

test: $(TEST_NAME)
	@./$(TEST_NAME)

clean:
	@$(MAKE) clean -C $(LIBFT_DIR)
	@$(RM) $(OBJECTS) $(TEST_OBJECTS)

fclean: clean
	@$(MAKE) fclean -C $(LIBFT_DIR)
	@$(RM) $(NAME) $(TEST_NAME)

re: fclean all

.PHONY: all re clean fclean test