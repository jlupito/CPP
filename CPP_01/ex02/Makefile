NAME = brain

CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

DEPS = ${OBJS:.o=.d}

INC = 
  
SRCS = main.cpp \
        
OBJS_PATH = ./objs
OBJS_NAMES = $(SRCS:.cpp=.o)
OBJS = $(addprefix $(OBJS_PATH)/, $(OBJS_NAMES))

all : $(NAME)

$(NAME): $(OBJS) $(INC)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo $(NAME) is built 

$(OBJS_PATH)/%.o: %.cpp
	@mkdir -p $(OBJS_PATH)
	@$(CXX) $(CXXFLAGS) -MMD -MP -c $< -o $@

clean :
	@rm -rf $(OBJS_PATH)
	@rm -rf $(DEPS)
	@echo "cleaning"

fclean : clean
	@rm -rf $(NAME)
	@echo "full clean"

re: fclean all

-include $(DEPS)

.PHONY:    all clean fclean re bonus