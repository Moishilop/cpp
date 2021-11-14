CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = ex03

SRC = HumanA.cpp \
HumanB.cpp \
main.cpp \
Weapon.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all