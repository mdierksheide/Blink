#ifndef GAME_H
#define GAME_H

#include "graphics.h"

class Game
{
	public:
		Game();

		void GameLoop();

	private:
		Graphics gfx;
};

#endif