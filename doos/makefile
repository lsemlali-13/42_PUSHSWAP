SRCS = push_swap.c actions/st_push.c actions/st_swap.c actions/st_rot.c actions/st_rev_rot.c src/pushswap_utils.c src/ft_atoi.c src/sort_small.c src/sort_big.c src/sort.c src/errors.c src/arr_utils.c src/sort_utils.c
BNS_SRCS = bonus/checker.c bonus/actions/st_push.c bonus/actions/st_swap.c bonus/actions/st_rot.c bonus/actions/st_rev_rot.c bonus/get_next_line/get_next_line.c bonus/get_next_line/get_next_line_utils.c bonus/errors.c bonus/utils.c bonus/ft_atoi.c
FLAGS = -Wall -Wextra -Werror
CC = gcc
NAME = push_swap
OBJS = $(SRCS:.c=.o)
BNS_OBJ = $(BNS_SRCS:.c=.o)
NAME_O = checker

all : $(NAME)
$(NAME) : $(OBJS)
		$(CC) $(FLAGS) $(SRCS) -o $(NAME)
bonus : $(NAME_O)
$(NAME_O) : $(BNS_OBJ)
		$(CC) $(FLAGS) $(BNS_SRCS) -o $(NAME_O)
clean :
		rm -f $(OBJS) $(BNS_OBJ)
fclean : clean
	rm -f $(NAME)
bclean : clean
	rm -f $(NAME_O)
re : fclean all
bre : bclean bonus