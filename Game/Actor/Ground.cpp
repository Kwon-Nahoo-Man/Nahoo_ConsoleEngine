#include "Ground.h"

C_GROUND::C_GROUND(const C_VECTOR2& position)
	:Nahoo::C_ACTOR(' ', position, Nahoo::E_COLOR::Black)
{
	m_sortingOrder = 0;
}
