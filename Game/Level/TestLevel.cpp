#include "TestLevel.h"
#include "Actor/Player.h"

C_TESTLEVEL::C_TESTLEVEL()
{
	AddNewActor(new C_PLAYER());
}
