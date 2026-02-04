#pragma once
#include "Level/Level.h"

class C_TESTLEVEL : public Nahoo::C_LEVEL
{
	RTTI_DECLARATIONS(C_TESTLEVEL, C_LEVEL)

public:
	C_TESTLEVEL();

private:
	void LoadMap(const char* filename);
};
