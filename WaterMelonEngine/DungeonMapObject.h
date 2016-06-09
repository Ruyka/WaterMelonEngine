#pragma once
#include "GameObject.h"
#include "SFML\Graphics.hpp"
#include "Map.h"
#include "Definition.h"
#include "PostOffice.h"

class DungeonMapObject : public GameObject
{
	Map * map;
public:
	DungeonMapObject();
	~DungeonMapObject();

	sf::Vector2f getMapPosition(float x, float y);

	// Inherited via GameObject
	virtual void update(sf::Event::EventType& type) override;
	virtual void render(sf::RenderWindow & window) override;
	virtual void receiveMessage(Package * package) override;
	virtual std::string getName() override;
};
