#pragma once
#include "SFML/Graphics.hpp"
#include "Settings.h"
struct Weed {
	sf::Texture texture;
	sf::Sprite sprite;
};
void WeedInit(Weed& weed, sf::Vector2f pos, std::string fileName) {
	weed.texture.loadFromFile(fileName);
	weed.sprite.setTexture(weed.texture);
	weed.sprite.setPosition(pos);
}
void grassLayerDraw(sf::RenderWindow& window, const Weed& weed) {
	window.draw(weed.sprite);
}