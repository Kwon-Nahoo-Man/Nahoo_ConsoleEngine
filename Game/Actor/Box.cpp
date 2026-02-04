#include "Box.h"

using namespace Nahoo;

C_BOX::C_BOX(const C_VECTOR2& position)
	: C_ACTOR('B', position,E_COLOR::Blue)
{
	m_sortingOrder = 3;
}
