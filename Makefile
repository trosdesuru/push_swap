# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edhernan <edhernan@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/06 15:03:52 by edhernan          #+#    #+#              #
#    Updated: 2024/05/06 16:44:56 by edhernan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
DEBUG_NAME = push_swap_debug

#----COLORS----#
DEF_COLOR = \033[1;39m
WHITE_BOLD = \033[1m
BLACK = \033[1;30m
RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
BLUE = \033[1;34m
PINK = \033[1;35m
CIAN = \033[1;36m

#----COMPILER----#
CC = cc
CCFLAGS = -Wall -Werror -Wextra

#----MANDATORY----#
SRCS =	push_swap.c \
		algorythm.c \
		algorythm_02.c \
		algorythm_03.c \
		atoint.c \
		check_args.c \
		check_nodes.c \
		mv_nodes_01.c \
		mv_nodes_02.c \
		mv_nodes_03.c \
		perror_printer.c \
		sort_stack_tools.c \
		sort_three.c \
		stack_adds.c \
		stack_find_tools.c \
		stack_lst_tools.c

OBJS = $(SRCS:.c=.o)
DEPS = $(OBJS:.o=.d)

#----DEBUG----#
ifdef DEBUG
	OBJS = $(SRCS:.c=_debug.o)
	NAME = $(DEBUG_NAME)
endif

#----RULES----#
all: $(NAME)

$(NAME): $(OBJS)
	@printf "$(BLUE)Linking objects and creating program...$(DEF_COLOR)\n"
	@$(CC) $(CCFLAGS) $(OBJS) -o $@
	@echo "$(GREEN)[✓] $(PINK)$@$(GREEN) created!!!$(DEF_COLOR)"

ifndef DEBUG
%.o: %.c Makefile
	@printf "$(CIAN)Compiling: $(PINK)$(notdir $<)...$(DEF_COLOR)\n"
	@$(CC) $(CCFLAGS) -MMD -c $< -o $@
else
%_debug.o: %.c Makefile
	@printf "$(CIAN)Compiling: $(PINK)$(notdir $<)...$(DEF_COLOR)\n"
	@$(CC) -g $(CCFLAGS) -MMD -c $< -o $@
endif

clean:
	@rm -rf $(OBJS) $(DEPS)
	@echo "$(RED)Object files deleted$(DEF_COLOR)"

fclean: clean
	@rm -f $(NAME) $(DEBUG_NAME)
	@echo "$(RED)Executable deleted$(DEF_COLOR)\n"

re: fclean all

debug:
	@$(MAKE) DEBUG=1

.PHONY: all clean fclean re debug

-include $(DEPS)

.SILENT:
