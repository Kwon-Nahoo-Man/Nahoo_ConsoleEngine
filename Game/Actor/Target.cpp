#include "Target.h"

C_TARGET::C_TARGET(const C_VECTOR2& position)
	:Nahoo::C_ACTOR('T', position, Nahoo::E_COLOR::Red)
{
	m_sortingOrder = 2;
}
