#ifndef GAME_HM
#define GAME_HM

#include <SFML\Window.hpp>
#include <SFML\Graphics.hpp>

class Game {
public:
	void start();

private:
	void game_loop();
	bool is_exiting();

	enum states {
		SPLASH,
		MAIN,
		GAME,
		PAUSE,
		EXIT
	};

	sf::RenderWindow window;
	states gamestate;
};


#endif