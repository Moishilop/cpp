CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = intern

HEADERS = Bureaucrat.hpp \
Form.hpp \
PresidentialPardonForm.hpp \
RobotomyRequestForm.hpp \
Intern.hpp \
ShrubberyCreationForm.hpp
 
SRC = Bureaucrat.cpp \
PresidentialPardonForm.cpp \
RobotomyRequestForm.cpp \
ShrubberyCreationForm.cpp \
Form.cpp \
Intern.cpp \
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