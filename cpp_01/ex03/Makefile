NAME 		= 	Unnecessary_violence
OBJS_DIR	= 	objects
SRCS 		=	srcs/main.cpp \
				srcs/Weapon.cpp \
				srcs/HumanA.cpp \
				srcs/HumanB.cpp

OBJS = $(SRCS:srcs/%.cpp=$(OBJS_DIR)/%.o)

FLAGS		 = -Wall -Werror -Wextra -std=c++98 #-Wpedantic

GREEN		=	\033[1;92m
RED			=	\033[1;91m
NC			=	\033[0m

all: $(NAME)

$(NAME): $(OBJS)
	@c++ $(FLAGS) $(OBJS) -o $(NAME)
	@echo "\n${GREEN}\"Unnecessary_violence\" is compiled${NC}"

$(OBJS_DIR)/%.o: srcs/%.cpp
	@mkdir -p $(OBJS_DIR)
	@c++ $(FLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJS_DIR)
	@echo "\n${RED} \"Unnecessary_violence\" is cleaned${NC}"

fclean: clean
	@rm -f $(NAME)

re: fclean all 