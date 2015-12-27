#ifndef CAPP_H_INCLUDED
#define CAPP_H_INCLUDED

#define SDL_MAIN_HANDLED
#include <SDL.h>

class App {
    private:

		static App instance;

		bool running;

		SDL_Window* window;
		SDL_Renderer* renderer;
		SDL_Surface* primarySurface;

		static const int WindowWidth = 1024;
		static const int WindowHeight = 768;

    public:
        App();

        int Execute();

    public:

        bool Init();

        void OnEvent(SDL_Event* Event);

        void Loop();

        void Render();

        void Cleanup();

		static App* GetInstance();

		static int GetWindowWidth() {return WindowWidth;};
		static int GetWindowHeight() {return WindowHeight;};
};


#endif // CAPP_H_INCLUDED
