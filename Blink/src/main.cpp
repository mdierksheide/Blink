#include "SDL.h"

#include "game.h"

int main(int argc, char* argv[])
{
	Game game = Game();
	game.GameLoop();
	return 0;
}