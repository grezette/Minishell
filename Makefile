.SUFFIXES:

NAME		= minishell

LIBFT_DIR	= ./Libft

LIBFT		= $(LIBFT_DIR)libft.a

SRCS		= minishell.c \

OBJS		= $(SRCS:.c=.o)

RM			= rm -rf

INC_PATH	= -I/include

CC			= gcc

CFLAGS		= -Wall -Wextra -Werror -g

LIBS		= -L$(LIBFT_DIR) -lft

all:		= $(LIBFT) $(NAME)

$(NAME)	:	$(OBJS)
					$(CC) $(CFLAGS) $^ $(LIBS) -o $@

%.o		:	%.c
					$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
					make every -C $(LIBFT_DIR)

clean	:
					make clean -C $(LIBFT_DIR)
					$(RM) $(OBJS)

fclean	:	clean
					make fclean -C $(LIBFT_DIR)
					$(RM) $(NAME)

re		:	fclean all

.PHONY: all clean fclean re
