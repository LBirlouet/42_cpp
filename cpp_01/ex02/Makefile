NAME 		= 	HI_THIS_IS_BRAIN
OBJS_DIR	= 	objects
SRCS 		=	main.cpp 

OBJS 		= $(addprefix $(OBJS_DIR)/, $(SRCS:%.cpp=%.o))
FLAGS		 = -Wall -Werror -Wextra -std=c++98 #-Wpedantic

GREEN		=	\033[1;92m
RED			=	\033[1;91m
NC			=	\033[0m

all: $(NAME)

$(NAME): $(OBJS)
	@c++ $(FLAGS) $(OBJS) -o $(NAME)
	@echo "\n${GREEN}\"HI THIS IS BRAIN\" is compiled${NC}"

$(OBJS_DIR)/%.o: %.cpp
	@mkdir -p $(OBJS_DIR)
	@c++ $(FLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJS_DIR)
	@echo "\n${RED} \"HI THIS IS BRAIN\" is cleaned${NC}"

fclean: clean
	@rm -f $(NAME)

re: fclean all