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
	m_animated_sprite.setTextureRect(m_animated_sprite.getCurrentFrame());
	return m_animated_sprite;
}

void Player::handleInput()
{
	sf::Event event;
	DEBUG_MSG("Handle Input");
	
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		m_animation.jumping();
		m_animated_sprite.setFrameRow(1);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		m_animation.walking();
		m_animated_sprite.setFrameRow(2);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	{
		m_animation.climbing();
		m_animated_sprite.setFrameRow(7);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
	{
		m_animation.falling();
		m_animated_sprite.setFrameRow(6);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		m_animation.swordplay();
		m_animated_sprite.setFrameRow(4);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
	{
		m_animation.shovelling();
		m_animated_sprite.setFrameRow(3);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::L))
	{
		m_animation.looting();
		m_animated_sprite.setFrameRow(5);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::I))
	{
		m_animation.idle();
		m_animated_sprite.setFrameRow(0);
	}

}

void Player::update()
{
	//std::cout << "Handle Update" << std::endl;
	m_animated_sprite.update();
}