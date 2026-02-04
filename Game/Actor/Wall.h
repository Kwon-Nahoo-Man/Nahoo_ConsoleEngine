#pragma once
#include "Actor/Actor.h"

class C_WALL : public Nahoo::C_ACTOR
{
	RTTI_DECLARATIONS(C_WALL,Nahoo::C_ACTOR)

public:

	C_WALL(const Nahoo::C_VECTOR2& position);
};
