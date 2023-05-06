#pragma once
#include "Player.h"
#include "settings.h"

class Player {
private:
	sf::Sprite sprite;
	sf::Texture texture;
	int score;
public:
	Player() : score(0) {
		texture.loadFromFile(player_file_name);
		sprite.setTexture(texture);
	}

	void pressSpace() {
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
			score++;
		}
	}


	int getScore() const {
		return score;
	}
	void PlayerDraw(sf::RenderWindow& window, Player& player) {
		window.draw(player.sprite);
	}
};