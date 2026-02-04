#pragma once
#include "Common/Common.h"

namespace Nahoo
{
	class C_LEVEL;
	class C_INPUT;

	class NAHOO_API C_ENGINE
	{
		struct S_ENGINESETTING
		{
			float targetFrameRate{};
		};

	public:
		C_ENGINE();
		~C_ENGINE();

	public:
		void QuitEngine();
		void Run();
		void SetNewLevel(C_LEVEL* newLevel);

		static C_ENGINE& GetInstance();

	private:
		void LoadEngineSetting();
		void BeginPlay();
		void Tick(float deltatime);
		void Draw();
		void ShutDown();
	
	private:
		bool m_isQuit{ false };
		S_ENGINESETTING m_engineSetting;
		C_LEVEL* m_mainLevel{};
		C_INPUT* m_input{};

		static C_ENGINE* m_instance;

	};
}

 
