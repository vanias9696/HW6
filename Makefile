NAME1	= wineC
NAME2	= wineP
CXX		= g++
FLAGS	= -Wall -Wextra -Werror -std=c++11
SRC1	= wine_example.cpp wineC.cpp
SRC2	= wine_exampleP.cpp wineP.cpp
OBJ1	= $(SRC1:.cpp=.o)
OBJ2	= $(SRC2:.cpp=.o)

all: $(NAME1) $(NAME2)

%.o:    %.cpp
		$(CXX) -o $@ -c $< $(FLAGS)

$(NAME1): $(OBJ1)
		$(CXX) -o $(NAME1) $(OBJ1) $(FLAGS)

$(NAME2): $(OBJ2)
		$(CXX) -o $(NAME2) $(OBJ2) $(FLAGS)

clean:
		rm -f $(OBJ1) $(OBJ2)

fclean: clean
		rm -f $(NAME1) $(NAME2)

re: fclean all
