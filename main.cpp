
#include <SFML/Graphics.hpp>
#include "settings.h"
#include "Grass.h"
#include "Player.h"
using namespace sf;

int main()
{
	// Объект, который, собственно, является главным окном приложения
	RenderWindow window(VideoMode(width, height), WINDOW_TITLE);
	window.setFramerateLimit(FPS);
	Weed weed;
	WeedInit(weed, Vector2f{ 0.f,0.f }, "Weed1.jpg");
	// Главный цикл приложения. Выполняется, пока открыто окно
	while (window.isOpen())
	{
		// Обрабатываем очередь событий в цикле
		Event event;
		while (window.pollEvent(event))
		{
			// Пользователь нажал на «крестик» и хочет закрыть окно?
			if (event.type == Event::Closed)
				// тогда закрываем его
				window.close();
		}
		// Отрисовка окна 
		window.clear();
		WeedDraw(window,weed);
		PlayerDraw(window, player);
		window.display();
	}

	return 0;
}