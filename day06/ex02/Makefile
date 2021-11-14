CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = ex02

HEADERS = A.hpp \
B.hpp \
C.hpp \
Base.hpp

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all