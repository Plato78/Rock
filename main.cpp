
#include <SFML/Graphics.hpp>
#include "settings.h"
#include "Grass.h"
#include "Player.h"
using namespace sf;

int main()
{
	// ������, �������, ����������, �������� ������� ����� ����������
	RenderWindow window(VideoMode(width, height), WINDOW_TITLE);
	window.setFramerateLimit(FPS);
	Weed weed;
	WeedInit(weed, Vector2f{ 0.f,0.f }, "Weed1.jpg");
	// ������� ���� ����������. �����������, ���� ������� ����
	while (window.isOpen())
	{
		// ������������ ������� ������� � �����
		Event event;
		while (window.pollEvent(event))
		{
			// ������������ ����� �� �������� � ����� ������� ����?
			if (event.type == Event::Closed)
				// ����� ��������� ���
				window.close();
		}
		// ��������� ���� 
		window.clear();
		WeedDraw(window,weed);
		PlayerDraw(window, player);
		window.display();
	}

	return 0;
}