#pragma once
#include "Player.h"
#include "Settings.h"
#include "Grass.h"

class Game {
private:
	sf::RenderWindow window;
	Player player;
	Weed weed;
	void checkEvents() {
		sf::Event event;
		while (window.pollEvent(event))
			if (event.type == sf::Event::Closed) window.close();
	}

	void update() {
		player.update();
	}
	void checkCollisions() {}
	void draw() {
		window.clear();
		window.draw(player.getSprite());
		window.draw(weed.sprite);
		window.display();
	}

public:
	Game() {
		window.create(sf::VideoMode(width, height), WINDOW_TITLE);
		window.setFramerateLimit(FPS);
	}
	void play() {
		while (window.isOpen())
		{
			checkEvents();
			update();
			checkCollisions();
			draw();
		}
	}
};