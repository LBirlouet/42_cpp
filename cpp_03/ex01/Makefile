NAME 		= 	Serena,_my_love!
OBJS_DIR	= 	objects
SRCS 		=	srcs/main.cpp \
				srcs/ClapTrap.cpp \
				srcs/ScavTrap.cpp

OBJS = $(SRCS:srcs/%.cpp=$(OBJS_DIR)/%.o)

FLAGS		 = -Wall -Werror -Wextra -std=c++98 #-Wpedantic

GREEN		=	\033[1;92m
RED			=	\033[1;91m
NC			=	\033[0m

all: $(NAME)

$(NAME): $(OBJS)
	@c++ $(FLAGS) $(OBJS) -o $(NAME)
	@echo "\n${GREEN}\"Serena, my love!\" is compiled${NC}"

$(OBJS_DIR)/%.o: srcs/%.cpp
	@mkdir -p $(OBJS_DIR)
	@c++ $(FLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJS_DIR)
	@echo "\n${RED}\"Serena, my love!\" is cleaned${NC}"

fclean: clean
	@rm -f $(NAME)

re: fclean all