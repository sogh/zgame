#include "App.h"

void App::Loop() {

    this->prevTicks = this->currentTicks;
    this->currentTicks = SDL_GetTicks();
}
