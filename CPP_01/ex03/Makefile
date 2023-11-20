NAME = brain
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo $(NAME) is built

clean :

	@rm -rf $(OBJS)
	@echo cleaning

fclean : clean
	@rm -rf $(NAME)
	@echo "full clean"

re : fclean all

.PHONY	: all clean fclean re