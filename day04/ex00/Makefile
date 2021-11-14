CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = ex00

HEADERS = Animal.hpp \
Cat.hpp \
Dog.hpp \
WrongAnimal.hpp \
WrongCat.hpp

SRC = Animal.cpp \
Cat.cpp \
Dog.cpp \
WrongAnimal.cpp \
WrongCat.cpp \
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