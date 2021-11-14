CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = ex03

HEADERS = ClapTrap.hpp \
ScavTrap.hpp \
FragTrap.hpp \
DiamondTrap.hpp 

SRC = ClapTrap.cpp \
ScavTrap.cpp \
FragTrap.cpp \
DiamondTrap.cpp \
main.cpp 

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all