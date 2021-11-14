CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = ex02

HEADERS = Bureaucrat.hpp \
Form.hpp \
PresidentialPardonForm.hpp \
RobotomyRequestForm.hpp \
ShrubberyCreationForm.hpp
 
SRC = Bureaucrat.cpp \
PresidentialPardonForm.cpp \
RobotomyRequestForm.cpp \
ShrubberyCreationForm.cpp \
Form.cpp \
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