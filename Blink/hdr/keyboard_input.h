#ifndef KEYBOARD_INPUT_H
#define KEYBOARD_INPUT_H

#include <map>

#include "SDL.h"

#include "input_stream.h"

class KeyboardInput : class InputStream
{
	private:
		std::map<Action, SDL_Scancode> _actionToKey;
};

#endif