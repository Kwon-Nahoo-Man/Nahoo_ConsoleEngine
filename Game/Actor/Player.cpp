#include <iostream>
#include <Windows.h>

#include "Player.h"
#include "Core/Input.h"
#include "Engine/Engine.h"
#include "Math/Color.h"


C_PLAYER::C_PLAYER(const Nahoo::C_VECTOR2& position)
	:Nahoo::C_ACTOR('T', position, Nahoo::E_COLOR::Green)
{
	m_sortingOrder = 10;
}

C_PLAYER::~C_PLAYER()
{

}

void C_PLAYER::BeginPlay()
{
	Nahoo::C_ACTOR::BeginPlay();

	//std::cout << "C_TESTACTOR::BeginPlay().\n";
}

void C_PLAYER::Tick(float deltaTime)
{
	Nahoo::C_ACTOR::Tick(deltaTime);

	if (Nahoo::C_INPUT::GetInstance().GetKey(VK_ESCAPE))
	{
		Nahoo::C_ENGINE::GetInstance().QuitEngine();
	}


	//std::cout << "DeltaTime: " << deltaTime << "\tFPS: " << (1.0f / deltaTime) << "\n";

	if (Nahoo::C_INPUT::GetInstance().GetKey(VK_LEFT) && GetPosition().m_x > 0)
	{
		Nahoo::C_VECTOR2 newPosition = GetPosition();
		newPosition.m_x -= 1;
		SetPosition(newPosition);
	}
	if (Nahoo::C_INPUT::GetInstance().GetKey(VK_RIGHT) && GetPosition().m_x < 20)
	{
		Nahoo::C_VECTOR2 newPosition = GetPosition();
		newPosition.m_x += 1;
		SetPosition(newPosition);
	}
	if (Nahoo::C_INPUT::GetInstance().GetKey(VK_UP) && GetPosition().m_y > 0)
	{
		Nahoo::C_VECTOR2 newPosition = GetPosition();
		newPosition.m_y -= 1;
		SetPosition(newPosition);
	}
	if (Nahoo::C_INPUT::GetInstance().GetKey(VK_DOWN) && GetPosition().m_y < 20)
	{
		Nahoo::C_VECTOR2 newPosition = GetPosition();
		newPosition.m_y += 1;
		SetPosition(newPosition);
	}
}

void C_PLAYER::Draw()
{
	Nahoo::C_ACTOR::Draw();
}
