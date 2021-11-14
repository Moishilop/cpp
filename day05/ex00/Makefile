CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = bureaucrat

HEADERS = Bureaucrat.hpp
 
SRC = Bureaucrat.cpp \
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