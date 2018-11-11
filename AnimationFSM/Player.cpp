#include <iostream>
#include <SFML/Graphics.hpp>
#include <Player.h>
#include <Idle.h>
#include <Debug.h>

Player::Player()
{
	
	m_animation.setCurrent(new Idle());
	m_animation.setPrevious(new Idle());
}

Player::Player(const AnimatedSprite& s) : m_animated_sprite(s)
{
	m_animation.setCurrent(new Idle());
	m_animation.setPrevious(new Idle());
}

Player::~Player() {}

AnimatedSprite& Player::getAnimatedSprite()
{
	int frame = m_animated_sprite.getCurrentFrame();
	m_animated_sprite.setTextureRect(m_animated_sprite.getFrame(frame));
	return m_animated_sprite;
}

void Player::handleInput()
{
	sf::Event event;
	DEBUG_MSG("Handle Input");
	
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		m_animation.jumping();
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		m_animation.walking();
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	{
		m_animation.climbing();
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
	{
		m_animation.falling();
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		m_animation.swordplay();
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
	{
		m_animation.shovelling();
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::L))
	{
		m_animation.looting();
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::I))
	{
		m_animation.idle();
	}

}

void Player::update()
{
	//std::cout << "Handle Update" << std::endl;
	m_animated_sprite.update();
}