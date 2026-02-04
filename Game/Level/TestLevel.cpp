#include <iostream>

#include "TestLevel.h"
#include "Actor/Player.h"
#include "Actor/Box.h"
#include "Actor/Ground.h"
#include "Actor/Target.h"
#include "Actor/Wall.h"


C_TESTLEVEL::C_TESTLEVEL()
{
	//AddNewActor(new C_PLAYER());
	LoadMap("Map.txt");
}

void C_TESTLEVEL::LoadMap(const char* filename)
{

	char path[2048]{};
	sprintf_s(path, 2048, "../Assets/%s", filename);

	FILE* file = nullptr;
	fopen_s(&file, path, "rt");

	if (file == nullptr)
	{
		std::cerr << "Failed to open map file\n";
		__debugbreak();
	}

	fseek(file, 0, SEEK_END);

	size_t fileSize = ftell(file);

	rewind(file);

	char* data = new char[fileSize + 1];

	size_t readSize = fread(data, sizeof(char), fileSize, file);

	int index{};
	Nahoo::C_VECTOR2 position{};

	for (; index < fileSize; index++)
	{
		char mapCharacter = data[index];
		
		switch (mapCharacter)
		{
		case'#':
		case'1':
			AddNewActor(new C_WALL(position));
			break;
		case'.':
			AddNewActor(new C_GROUND(position));
			break;
		case'p':
			AddNewActor(new C_GROUND(position));
			AddNewActor(new C_PLAYER(position));
			break;
		case'b':
			AddNewActor(new C_GROUND(position));
			AddNewActor(new C_BOX(position));
			break;
		case't':
			AddNewActor(new C_TARGET(position));
			break;
		}
		++position.m_x;

		if (mapCharacter == '\n')
		{
			std::cout << "\n";
			++position.m_y;
			position.m_x = 0;
		}
	}








	delete[] data;

	fclose(file);
}
