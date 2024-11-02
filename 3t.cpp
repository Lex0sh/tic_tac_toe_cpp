// Game Tic-tac-toe

#include <SDL3/SDL.h>
#include <iostream>

//------------------------------------------------------------------------------
// Game cycle

int main()
{
    SDL_Window *window;
	SDL_Init(SDL_INIT_VIDEO);
	window = SDL_CreateWindow("SDL3 Window", 680, 480, 0);

	if (window == NULL) {
		SDL_LogError(SDL_LOG_CATEGORY_ERROR, "Could not create window: %s\n", SDL_GetError());
		return 1;
	}

	SDL_Delay(3000);
	SDL_DestroyWindow(window);
	SDL_Quit();
	return 0;

} 
