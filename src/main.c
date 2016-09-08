#include "../SDL2/include/SDL.h"

#include <stdio.h>
//#include <SDL2/SDL.h>


int main ( int argc, char** argv )
{

	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_Window *window = SDL_CreateWindow("Hello World!", 100, 100, 1000, 480,
			SDL_WINDOW_SHOWN);
	/*
	 *     SDL_Renderer *ren = SDL_CreateRenderer(window, -1,
	 *         SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	 *             if (ren == NULL){
	 *                     std::cout << "SDL_CreateRenderer Error: " << SDL_GetError() << std::endl;
	 *                             return 1;
	 *                                 }
	 *                                 */
	SDL_Surface *surface_bmp; //= SDL_LoadBMP("yo.png");
	/*
	 *     SDL_Texture *tex = SDL_CreateTextureFromSurface(ren, surface_bmp);
	 *         SDL_FreeSurface(surface_bmp);
	 *             if (tex == NULL){
	 *                     std::cout << "SDL_CreateTextureFromSurface Error: "
	 *                                 << SDL_GetError() << std::endl;
	 *                                         return 1;
	 *                                             }
	 *                                             */

	SDL_Surface *surface_window = SDL_GetWindowSurface(window);

	/*
	 *      * Copies the bmp surface to the window surface
	 *           */
	SDL_BlitSurface(surface_bmp,
			NULL,
			surface_window,
			NULL);

	/*
	 *      * Now updating the window
	 *           */
	SDL_UpdateWindowSurface(window);

	/*
	 *      * This function used to update a window with OpenGL rendering.
	 *           * This is used with double-buffered OpenGL contexts, which are the default.
	 *                */
	/*    SDL_GL_SwapWindow(window); */

	SDL_Delay(5000);

	/*    SDL_DestroyTexture(tex);*/
	/*    SDL_DestroyRenderer(ren);*/
	SDL_DestroyWindow(window);
	SDL_Quit();

	return 0;
}

