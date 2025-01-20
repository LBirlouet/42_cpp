NAME 		= 	Bureaucrat
OBJS_DIR	= 	objects
SRCS 		=	srcs/main.cpp \
				srcs/Bureaucrat.cpp \
				srcs/AForm.cpp \
				srcs/ShrubberyCreationForm.cpp \
				srcs/RobotomyRequestForm.cpp \
				srcs/PresidentialPardonForm.cpp \
				srcs/Intern.cpp

OBJS = $(SRCS:srcs/%.cpp=$(OBJS_DIR)/%.o)

FLAGS		 = -Wall -Werror -Wextra -std=c++98

GREEN		=	\033[1;92m
RED			=	\033[1;91m
NC			=	\033[0m

all: $(NAME)

$(NAME): $(OBJS)
	@c++ $(FLAGS) $(OBJS) -o $(NAME)
	@echo "\n${GREEN}\"Bureaucrat\" is compiled${NC}"

$(OBJS_DIR)/%.o: srcs/%.cpp
	@mkdir -p $(OBJS_DIR)
	@c++ $(FLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJS_DIR)
	@echo "\n${RED}\"Bureaucrat\" is cleaned${NC}"

fclean: clean
	@rm -f $(NAME)

re: fclean all