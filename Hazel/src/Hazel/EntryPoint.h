#pragma once
#include "Application.h"

// if define in the Hazel core
#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv) {
	// maybe is not a good idea to initialize log in the main function
	Hazel::Log::Init();
	HZ_CORE_WARN("Initialized Log!");
	int a = 5;
	HZ_INFO("Hello Var={0}", a);

	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
	return 0;
}


#endif