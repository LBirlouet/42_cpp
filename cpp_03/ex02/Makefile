NAME 		= 	Repetitive_work
OBJS_DIR	= 	objects
SRCS 		=	srcs/main.cpp \
				srcs/ClapTrap.cpp \
				srcs/ScavTrap.cpp \
				srcs/FragTrap.cpp

OBJS = $(SRCS:srcs/%.cpp=$(OBJS_DIR)/%.o)

FLAGS		 = -Wall -Werror -Wextra -std=c++98 #-Wpedantic

GREEN		=	\033[1;92m
RED			=	\033[1;91m
NC			=	\033[0m

all: $(NAME)

$(NAME): $(OBJS)
	@c++ $(FLAGS) $(OBJS) -o $(NAME)
	@echo "\n${GREEN}\"Repetitive work\" is compiled${NC}"

$(OBJS_DIR)/%.o: srcs/%.cpp
	@mkdir -p $(OBJS_DIR)
	@c++ $(FLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJS_DIR)
	@echo "\n${RED}\"Repetitive work\" is cleaned${NC}"

fclean: clean
	@rm -f $(NAME)

re: fclean all