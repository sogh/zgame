
#include "App.h"

App::App() {
    this->running = true;
    this->primarySurface = NULL;
    this->renderer = NULL;
    this->window = NULL;
    this->prevTicks = -1;
    this->currentTicks = -1;
}

int App::Execute() {
    if(Init() == false) {
        return -1;
    }

    SDL_Event Event;

    while(this->running) {
        while(SDL_PollEvent(&Event)) {
            OnEvent(&Event);
        }

        Loop();
        Render();
    }

    Cleanup();

    return 0;
}

int main(int argc, char* argv[]) {
    App theApp;

    return theApp.Execute();
}
