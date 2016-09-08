#include "../SDL2/include/SDL.h"

#include <stdio.h>
//#include <SDL2/SDL.h>


int main ( int argc, char** argv )
{

	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_Window *window = SDL_CreateWindow("Hello World!", 100, 100, 1000, 480,
			SDL_WINDOW_SHOWN);
	SDL_Surface *surface_bmp; //= SDL_LoadBMP("yo.png");

	SDL_Surface *surface_window = SDL_GetWindowSurface(window);
	SDL_BlitSurface(surface_bmp,
			NULL,
			surface_window,
			NULL);
	SDL_UpdateWindowSurface(window);
	SDL_Delay(000);
	SDL_DestroyWindow(window);
	SDL_Quit();

	return 0;
}
