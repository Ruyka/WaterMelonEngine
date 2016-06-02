#pragma once
#include "GameObject.h"
#include "SFML\Graphics.hpp"
#include "TextureManager.h"
#include "Sprite.h"
#include "StatisticBox.h"
class MenuPanel : public GameObject , public TextureManager
{
	sf::Font font;
	Sprite* background;
	Sprite* corner;
	sf::Vector2f pos;
	sf::Vector2f size;
	sf::RectangleShape avatar;
	StatisticBox* health;
	StatisticBox* mana;
	StatisticBox* attackDamage;
	StatisticBox* spellDamage;
	StatisticBox* armor;
	StatisticBox* spellResist;
public:
	MenuPanel();
	~MenuPanel();

	// Inherited via GameObject
	virtual void update(sf::Event::EventType & type) override;
	virtual void render(sf::RenderWindow & window) override;
	virtual void receiveMessage(Package * package) override;
	virtual std::string getName() override;
};

