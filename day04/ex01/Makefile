CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = ex01

HEADERS = Animal.hpp \
Cat.hpp \
Dog.hpp \
Brain.hpp 

SRC = Animal.cpp \
Cat.cpp \
Dog.cpp \
Brain.cpp \
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