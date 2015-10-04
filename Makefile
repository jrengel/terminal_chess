game: main.o board.o piece.o
	g++ main.o board.o pieces.o -o game
	
main: main.cpp 
	g++ main.cpp -o main.o

board: board.cpp
	g++ board.cpp -o board.o

pieces: pieces.cpp
	g++ pieces.cpp -o pieces.o

test:
	./game

clean:
	rm -f *.o 
