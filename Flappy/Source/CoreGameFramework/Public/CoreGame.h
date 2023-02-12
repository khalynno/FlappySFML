#pragma once
#include "SFML/Graphics.hpp"


class CoreGame
{
public:
	CoreGame();
	~CoreGame();

	void Init(const char* title, int width, int height, bool fullscreen);

private:
	sf::RenderWindow* m_window;

};

