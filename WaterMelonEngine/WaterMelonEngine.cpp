#include "WaterMelonEngine.h"
#include "Circle.h"

WaterMelonEngine::WaterMelonEngine()
	: window()
	, timePerFrame(sf::seconds(1.f / 144.0f))
{
	sf::VideoMode destopMode = sf::VideoMode::getDesktopMode();
	window.create(sf::VideoMode(destopMode.width / 2, destopMode.height / 2), "Window Name", sf::Style::Default);
	window.setFramerateLimit(144); // 144.0f framerate per limit
}
WaterMelonEngine::~WaterMelonEngine()
{
}
void WaterMelonEngine::loop()
{
	while (window.isOpen())
	{
		update();// Update every frame.
		render();
	}
}


void WaterMelonEngine::update()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
	{
		window.close();
	}
}

void WaterMelonEngine::render()
{
	window.clear();
	window.display();
}