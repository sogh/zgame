#include "App.h"

void App::OnEvent(SDL_Event* Event) {
    if(Event->type == SDL_QUIT) {
        this->running = false;
    }
}
