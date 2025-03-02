#pragma once
#include"../../GameManager/ResourceManager.h"

class Layer {
public:
	void Init(std::string name);
	void Update(float deltaTime);
	void Render(sf::RenderWindow* window);
	void setPosition(sf::Vector2i pos);
	void Run();
private:
	sf::Sprite m_Image1;
	sf::Sprite m_Image2;
	float m_Speed;

	sf::Vector2i m_SizeImage;
};