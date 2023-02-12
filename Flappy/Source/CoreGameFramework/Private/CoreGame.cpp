#include "CoreGameFramework/Public/CoreGame.h"

CoreGame::CoreGame()
{}

CoreGame::~CoreGame()
{}

void CoreGame::Init(const char* title, int width, int height, bool fullscreen)
{
	int flag = 4;
	if (fullscreen)
	{
		flag = 8;
	}
	m_window = new sf::RenderWindow(sf::VideoMode(width, height), title, flag);
	while (true)
	{
		m_window->display();
	}
	
}
