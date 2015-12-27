#include "App.h"
#include "Log.h"

bool App::Init() {

    if(SDL_Init(SDL_INIT_VIDEO) < 0) {
    	Log("Unable to Init SDL: %s", SDL_GetError());
    	return false;
    }

    if(!SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "1")) {
        Log("Unable to Init hinting: %s", SDL_GetError());
    }

    if((this->window = SDL_CreateWindow(
    	"My SDL Game",
    	SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
    	WindowWidth, WindowHeight, SDL_WINDOW_SHOWN)
    ) == NULL) {
    	Log("Unable to create SDL Window: %s", SDL_GetError());
    	return false;
    }

    this->primarySurface = SDL_GetWindowSurface(this->window);

    if((this->renderer = SDL_CreateRenderer(this->window, -1, SDL_RENDERER_ACCELERATED)) == NULL) {
        Log("Unable to create renderer");
        return false;
    }

    SDL_SetRenderDrawColor(this->renderer, 0x00, 0x00, 0x00, 0xFF);

    return true;
}
