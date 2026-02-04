#pragma once

#include "Actor/Actor.h"

using namespace Nahoo;

class C_BOX : public C_ACTOR
{
	RTTI_DECLARATIONS(C_BOX,C_ACTOR)
public:
	C_BOX(const C_VECTOR2& position);

};
