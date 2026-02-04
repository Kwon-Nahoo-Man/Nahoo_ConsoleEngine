#pragma once

#include "Actor/Actor.h"

using namespace Nahoo;

class C_TARGET : public C_ACTOR
{
	RTTI_DECLARATIONS(C_TARGET, C_ACTOR)
public:
	C_TARGET(const C_VECTOR2& position);

};
