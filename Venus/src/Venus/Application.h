#pragma once
#include "Core.h"

namespace VE {
	class VE_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	// To be defined in Client
	Application* CreateApplication();
}
