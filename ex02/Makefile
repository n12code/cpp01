NAME = brain
CXX = g++
CXXFLAGS = -g -Wall -Wextra -Werror -std=c++98

OBJ_DIR = obj
SRC_DIR = .

FILES = main

SRC = $(addprefix $(SRC_DIR)/, $(addsuffix .cpp, $(FILES)))
OBJ = $(addprefix $(OBJ_DIR)/, $(addsuffix .o, $(FILES)))

all: $(NAME)

$(NAME): $(OBJ)
	@echo "compiling the binary\n"
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	@echo "\nprogram created"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@echo "compiling the obj"
	@mkdir -p $(OBJ_DIR)
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@echo "removing obj"
	@rm -rf $(OBJ_DIR)

fclean: clean
	@echo "removing the binary"
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
