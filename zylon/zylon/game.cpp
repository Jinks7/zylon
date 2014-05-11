#include "game.h"

void Game::start(){
	// create window
	// find best resolution for fullscreen
	std::vector<sf::VideoMode> modes = sf::VideoMode::getFullscreenModes();
	window.create(modes[3], "Zylon", sf::Style::Fullscreen);
				// sf::VideoMode(500, 600, 32)

	gamestate = Game::GAME;

	// while is not exiting
	while (!is_exiting()){
		game_loop();
		window.clear(sf::Color(0,200,0));
		window.display();
	}
}

bool Game::is_exiting(){
	if (gamestate == states::EXIT){
		return true;
	}
	else {
		return false;
	}
}

void Game::game_loop(){
	sf::Event event;
	while (window.pollEvent(event)){
		switch (event.type){
		case sf::Event::Closed:
			gamestate = EXIT;
			break;
		case sf::Event::KeyPressed:
			if (event.key.code == sf::Keyboard::Escape){
				gamestate = EXIT;
				window.close();
			}
			break;
		}
	}
}

//Game::states Game::gamestate = Game::SPLASH;
//sf::RenderWindow Game::window;
