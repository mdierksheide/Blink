#ifndef INPUT_STREAM_H
#define INPUT_STREAM_H

#include "SDL.h"

enum Action
{
	// Menus
	ACCEPT,
	BACK,
	QUIT_GAME,

	// In-Game
	JUMP,
	BLINK,
};

class InputStream
{
	public:
		InputStream();
		~InputStream();

		virtual void BeginNewFrame();

		virtual float GetJoystickAngle();
		virtual bool WasKeyPressed(Action btn);
		//virtual bool WasKeyReleased(int btn);
		//virtual bool IsKeyHeld(int key);

	private:
		
};

#endif