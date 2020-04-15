#include "CommandLineTestRunner.h"
#include <iostream>

int main(int ac, char **av)
{
	std::cout<<"Start Unit testing Blinky component\n";
	return CommandLineTestRunner::RunAllTests(ac, av);
	// return result;
}
