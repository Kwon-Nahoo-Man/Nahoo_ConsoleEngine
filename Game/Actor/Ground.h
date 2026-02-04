#pragma once

#include "Actor/Actor.h"

using namespace Nahoo;

class C_GROUND : public C_ACTOR
{
	RTTI_DECLARATIONS(C_GROUND, C_ACTOR)
public:
	C_GROUND(const C_VECTOR2& position);

};
