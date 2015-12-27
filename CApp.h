#ifndef CAPP_H_INCLUDED
#define CAPP_H_INCLUDED

#define SDL_MAIN_HANDLED
#include <SDL.h>

class CApp {
    private:

		static CApp Instance;

		bool Running = true;

		SDL_Window* Window = NULL;
		SDL_Renderer* Renderer = NULL;
		SDL_Surface* PrimarySurface = NULL;

		static const int WindowWidth = 1024;
		static const int WindowHeight = 768;

    public:
        CApp();

        int OnExecute();

    public:

        bool OnInit();

        void OnEvent(SDL_Event* Event);

        void OnLoop();

        void OnRender();

        void OnCleanup();

		static CApp* GetInstance();

		static int GetWindowWidth() {return WindowWidth;};
		static int GetWindowHeight() {return WindowHeight;};
};


#endif // CAPP_H_INCLUDED
