#include <iostream>
#include <SDL.h>

int main(int argc, char** argv)
{
	
	SDL_Init(SDL_INIT_AUDIO);

	std::cout << "Hello World!" << std::endl;

	SDL_Quit();
	return 0;
}
