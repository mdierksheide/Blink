#include "SDL.h"

#include "game.h"

Game::Game()
{
	SDL_Init(SDL_INIT_EVERYTHING);
}

void Game::GameLoop()
{
	SDL_Event event;

	while (true)
	{
		// Input


		if (SDL_PollEvent(&event))
		{
			switch (event.type)
			{
				case SDL_KEYDOWN:
					if (event.key.repeat == 0)
					{
						input.KeyDownEvent(event);
					}
					break;
				case SDL_KEYUP:
					input.KeyUpEvent(event);
					break;
				case SDL_QUIT:
					return;
			}
		}

		// Update
		// Draw
	}
}