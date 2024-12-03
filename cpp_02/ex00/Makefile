NAME 		= 	My_First_Class_in_Orthodox_Canonical_Form
OBJS_DIR	= 	objects
SRCS 		=	srcs/main.cpp \
				srcs/Fixed.cpp

OBJS = $(SRCS:srcs/%.cpp=$(OBJS_DIR)/%.o)

FLAGS		 = -Wall -Werror -Wextra -std=c++98 #-Wpedantic

GREEN		=	\033[1;92m
RED			=	\033[1;91m
NC			=	\033[0m

all: $(NAME)

$(NAME): $(OBJS)
	@c++ $(FLAGS) $(OBJS) -o $(NAME)
	@echo "\n${GREEN}\"My First Class in Orthodox Canonical Form\" is compiled${NC}"

$(OBJS_DIR)/%.o: srcs/%.cpp
	@mkdir -p $(OBJS_DIR)
	@c++ $(FLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJS_DIR)
	@echo "\n${RED}\"My First Class in Orthodox Canonical Form\" is cleaned${NC}"

fclean: clean
	@rm -f $(NAME)

re: fclean all