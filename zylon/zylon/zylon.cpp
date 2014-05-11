// standard includes
#include <iostream>

// other includes
#include "game.h"

int main(int argc, char* argv[]){
	// start the game
	Game* game = new Game();
	game->start();

	return 0;
}