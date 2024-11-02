all: game

game: 3t.cpp
	- g++ 3t.cpp -lSDL3 -o game
