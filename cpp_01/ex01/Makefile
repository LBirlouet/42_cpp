NAME 		= 	zombieHord
OBJS_DIR	= 	objects
SRCS 		=	main.cpp \
				Zombie.cpp \
				zombieHorde.cpp

OBJS 		= $(addprefix $(OBJS_DIR)/, $(SRCS:%.cpp=%.o))
FLAGS		 = -Wall -Werror -Wextra -std=c++98 #-Wpedantic

GREEN		=	\033[1;92m
RED			=	\033[1;91m
NC			=	\033[0m

all: $(NAME)

$(NAME): $(OBJS)
	@c++ $(FLAGS) $(OBJS) -o $(NAME)
	@echo "\n${GREEN}BraiiiiiiinnnzzzZ is compiled${NC}"

$(OBJS_DIR)/%.o: %.cpp
	@mkdir -p $(OBJS_DIR)
	@c++ $(FLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJS_DIR)
	@echo "\n${RED}BraiiiiiiinnnzzzZ is cleaned${NC}"

fclean: clean
	@rm -f $(NAME)

re: fclean all