NAME=	mutantStack
CC=		c++
FLAGS=	-Wall -Wextra -Werror -g3 -std=c++98

SRC= 	main.cpp
OBJ_P=	./obj/
OBJ=	$(SRC:%.cpp=$(OBJ_P)%.o)

all: $(NAME)

$(NAME): $(OBJ)
	@mkdir -p $(OBJ_P)
	$(CC) $(FLAGS) $^ -o $(NAME)

$(OBJ_P)%.o: %.cpp
	@mkdir -p $(OBJ_P)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)
	rm -rf $(OBJ_P)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: re fclean clean