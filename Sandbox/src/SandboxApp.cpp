#include <Helix.h>

class Sandbox : public Helix::Application 
{

public:
	Sandbox() 
	{

	}

	~Sandbox() 
	{

	}
};


int Main() {
	Sandbox* sandbox = new Sandbox();
	sandbox->Run();
	delete sandbox;
	return 0;
}