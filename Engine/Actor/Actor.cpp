#include <Windows.h>
#include <iostream>

#include "Actor.h"
#include "Renderer/Renderer.h"


Nahoo::C_ACTOR::C_ACTOR()
{

}

Nahoo::C_ACTOR::C_ACTOR(const char image, C_VECTOR2 position, E_COLOR color)
	: m_image(image), m_position(position.m_x, position.m_y), m_color(color)
{

}

Nahoo::C_ACTOR::~C_ACTOR()
{

}

void Nahoo::C_ACTOR::BeginPlay()
{
	m_hasBegunPlay = true;
}

void Nahoo::C_ACTOR::Tick(float deltaTime)
{
	

}

void Nahoo::C_ACTOR::Draw()
{
	C_RENDERER::Draw(m_position, m_color, m_image);
	
}

void Nahoo::C_ACTOR::SetPosition(const C_VECTOR2& newPosition)
{
	COORD coord{};
	coord.X = static_cast<SHORT>(m_position.m_x);
	coord.Y = static_cast<SHORT>(m_position.m_y);

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

	std::cout << ' ';

	m_position = newPosition;
}

