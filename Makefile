RESET	=	\033[0m
GREEN	=	\033[32m
RED		=	\033[31m

NAME = push_swap

SRCS =   main.c push_funcs.c revRotate_funcs.c rotate_funcs.c swap_funcs.c checks.c utils.c push_swap.c stack_funcs.c positions.c get_input.c tiny_sorts.c

OBJS = $(SRCS:.c=.o)

CC = @gcc -ggdb
MFLAGS =  ./libft/libft.a
AFLAGS =  -Wall -Wextra -Werror ./libft
CFLAGS =  -Wall -Wextra -Werror

RM = rm -rf


all :$(MFLAGS) $(NAME)

$(MFLAGS):
	@make -C ./libft

$(NAME): $(OBJS)
	@echo "$(GREEN)>- 🌊Compiling...🌊 [$(NAME)] $(RESET)"
	@$(CC) $(OBJS) $(MFLAGS) $(CFLAGS) -o $(NAME)
	@echo "$(GREEN)>-🌊🌊🌊🌊🌊Finish..🌊🌊🌊🌊🌊 [$(NAME)] $(RESET)"

fclean : clean
	@echo "$(RED)>- 🌊🌊🌊🌊🌊Deleting...🌊🌊🌊🌊🌊 [$(NAME)] $(RESET)"
	@$(RM) ./libft/*.a
	@$(RM) ./*.a
	@$(RM) $(NAME)
	@echo "$(RED)>- 🌊🌊🌊Finish..🌊🌊🌊 [$(NAME)] $(RESET)"

clean :
	@$(RM) ./libft/*.o
	@$(RM) ./*.o
	@$(RM) $(OBJS)

re : fclean all

.PHONY : all fclean clean re
