#pragma once
#include <Hazel.h>

class Sandbox : public Hazel::Application {
public:
	Sandbox() {

	}
	~Sandbox() {

	}
};

// define in this client
Hazel::Application* Hazel::CreateApplication() {
	return new Sandbox();
}