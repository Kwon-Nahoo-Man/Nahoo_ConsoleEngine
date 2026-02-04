#include <iostream>
#include "Renderer.h"

void Nahoo::C_RENDERER::Draw(const char image)
{
	std::cout << image;
}

void Nahoo::C_RENDERER::Draw(C_VECTOR2& position, const char image)
{
	UTIL::SetConsolePosition(position);
	std::cout << image;
}

void Nahoo::C_RENDERER::Draw(C_VECTOR2& position, E_COLOR color, const char image)
{
	UTIL::SetConsolePosition(position);
	UTIL::SetConsoleTextColor(color);
	std::cout << image;

	// 다시 원상태로 복구
	UTIL::SetConsoleTextColor(E_COLOR::White);
}


