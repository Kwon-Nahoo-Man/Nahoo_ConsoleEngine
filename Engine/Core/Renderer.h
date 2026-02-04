#pragma once
#include "Util/Util.h"

namespace Nahoo
{
	class C_RENDERER
	{
	
	public:

		static void Draw(const char image);
		static void Draw(C_VECTOR2& position, const char image);
		static void Draw(C_VECTOR2& position, E_COLOR color, const char image);

	private:


	};


}
