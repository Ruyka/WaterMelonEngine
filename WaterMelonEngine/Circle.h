#pragma once
#include "INode.h"
#include <SFML\Graphics.hpp>
class Circle : public INode
{
	sf::CircleShape circle;
public:
	Circle();
	virtual ~Circle();

	// Inherited via IGameObject
	virtual void onAwake() override;
	virtual void onSleep() override;
	virtual void onEnable() override;
	virtual void onDisable() override;
	virtual void init() override;
	virtual void update() override;
	virtual void render(sf::RenderWindow& window) override;

};

