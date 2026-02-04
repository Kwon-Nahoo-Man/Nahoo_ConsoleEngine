#include "Wall.h"

C_WALL::C_WALL(const Nahoo::C_VECTOR2& position)
	:Nahoo::C_ACTOR('#',position,Nahoo::E_COLOR::White)
{
	m_sortingOrder = 0;
}
