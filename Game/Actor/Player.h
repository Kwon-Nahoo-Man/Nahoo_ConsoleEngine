#pragma once
#include "Actor/Actor.h"

class C_PLAYER : public Nahoo::C_ACTOR
{
	RTTI_DECLARATIONS(C_PLAYER, C_ACTOR)

public:
	C_PLAYER();
	~C_PLAYER();

public:
	virtual void BeginPlay() override;
	virtual void Tick(float deltaTime) override;
	virtual void Draw() override;

protected:
	
};
