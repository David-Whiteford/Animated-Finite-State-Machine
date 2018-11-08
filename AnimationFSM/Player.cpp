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
		m_animation.jumping();
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	{
		m_animation.climbing();
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
	{
		m_animation.falling();
	}



	//switch (in.getCurrent())
	//{
	//case Input::Action::IDLE:
	//	//std::cout << "Player Idling" << std::endl;
	//	m_animation.idle();
	//	break;
	//case Input::Action::UP:
	//	//std::cout << "Player Up" << std::endl;
	//	m_animation.climbing();
	//	break;
	//case Input::Action::LEFT:
	//	//std::cout << "Player Left" << std::endl;
	//	m_animation.jumping();
	//	break;
	//case Input::Action::RIGHT:
	//	//std::cout << "Player Idling" << std::endl;
	//	m_animation.jumping();
	//case Input::Action::DOWN:
	///*	m_animation.
	//	break;*/
	//default:
	//	break;
	//}
}

void Player::update()
{
	//std::cout << "Handle Update" << std::endl;
	m_animated_sprite.update();
}