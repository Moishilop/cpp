CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = ex03

HEADERS = AMateria.hpp \
Character.hpp \
Cure.hpp \
Ice.hpp \
ICharacter.hpp \
IMateriaSource.hpp \
MateriaSource.hpp 

SRC = AMateria.cpp \
Character.cpp \
Cure.cpp \
Ice.cpp \
MateriaSource.cpp \
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