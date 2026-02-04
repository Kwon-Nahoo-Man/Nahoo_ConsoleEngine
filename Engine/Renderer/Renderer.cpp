#include <iostream>
#include "Renderer.h"
#include "ScreenBuffer.h"

using namespace Nahoo;

Nahoo::C_RENDERER::S_FRAME::S_FRAME(int bufferCount)
{
	m_charInfoArray = new CHAR_INFO[bufferCount];
	memset(m_charInfoArray, 0, sizeof(CHAR_INFO) * bufferCount);

	m_sortingOrderArray = new int[bufferCount];
	memset(m_sortingOrderArray, 0, sizeof(int) * bufferCount);
}

Nahoo::C_RENDERER::S_FRAME::~S_FRAME()
{
	if (m_charInfoArray != nullptr)
	{
		delete[] m_charInfoArray;
		m_charInfoArray = nullptr;
	}
	if (m_sortingOrderArray != nullptr)
	{
		delete[] m_sortingOrderArray;
		m_sortingOrderArray = nullptr;
	}
}

void Nahoo::C_RENDERER::S_FRAME::Clear(const C_VECTOR2& screenSize)
{
	const int width = screenSize.m_x;
	const int height = screenSize.m_y;

	for (int y = 0; y < height; ++y)
	{
		for (int x = 0; x < width; ++x)
		{
			const int index = (y * width) + x;

			CHAR_INFO& info = m_charInfoArray[index];
			info.Char.AsciiChar = ' ';
			info.Attributes = 0;

			m_sortingOrderArray[index] = -1;
		}
	}
}

// ----------------------Frame----------------------//

C_RENDERER* C_RENDERER::m_instance = nullptr;

Nahoo::C_RENDERER::C_RENDERER(const C_VECTOR2& screenSize)
	: m_screenSize(screenSize)
{
	m_instance = this;

	const int bufferCount = m_screenSize.m_x * m_screenSize.m_y;
	m_frame = new S_FRAME(bufferCount);

	m_frame->Clear(m_screenSize);

	m_screenBuffers[0] = new C_SCREENBUFFER(m_screenSize);
	m_screenBuffers[0]->Clear();

	m_screenBuffers[1] = new C_SCREENBUFFER(m_screenSize);
	m_screenBuffers[1]->Clear();

	Present();
}

Nahoo::C_RENDERER::~C_RENDERER()
{
	if (m_frame != nullptr)
	{
		delete m_frame;
		m_frame = nullptr;
	}

	if (m_screenBuffers[0] != nullptr)
	{
		delete m_screenBuffers[0];
		m_screenBuffers[0] = nullptr;
	}
	if (m_screenBuffers[1] != nullptr)
	{
		delete m_screenBuffers[1];
		m_screenBuffers[1] = nullptr;
	}
}

void Nahoo::C_RENDERER::Draw()
{

}

void Nahoo::C_RENDERER::Submit(const char* text, const C_VECTOR2& position, E_COLOR color, int sortingOrder)
{

}

C_RENDERER& C_RENDERER::GetInstance()
{
	if (m_instance == nullptr)
	{
		MessageBoxA(
			nullptr,
			"Renderer::Get() - instance is null",
			"Error",
			MB_OK
		);

		__debugbreak();
	}

	return *m_instance;
}

void Nahoo::C_RENDERER::Clear()
{

}

void Nahoo::C_RENDERER::Present()
{

}

C_SCREENBUFFER* Nahoo::C_RENDERER::GetCurrentBuffer()
{
	return nullptr;
}
