#pragma once

#include "Core.h"

namespace Helix {

	class HELIX_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

}