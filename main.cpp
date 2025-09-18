#include <iostream>
#include <cstdlib>
#include "gammaramp.h"


// int WINAPI WinMain(
//   HINSTANCE hInstance,      // handle to current instance
//   HINSTANCE hPrevInstance,  // handle to previous instance
//   LPSTR lpCmdLine,          // command line
//   int nCmdShow              // show state
// )

void print_usage() {
	std::cout << "ScreenDimmer.exe on / off" << std::endl;
}

int main(int argc, char* argv[])
{
	//Example for changing the brightness with CGammaRamp class:
	//Be aware that this exmaple may not work properly in all
	//Video cards.

	char* first_arg = argv[1];

    if (first_arg == nullptr) {
		print_usage();
        return EXIT_FAILURE;
    }
	
	CGammaRamp GammaRamp;
	std::string command = std::string(first_arg);
	
	if (command == "on") {
		//Make the screen darker:
		GammaRamp.SetBrightness(NULL, 5);
	} else if (command == "off") {
		//Return back to normal:
		GammaRamp.SetBrightness(NULL, 128);
	} else {
		print_usage();
        return EXIT_FAILURE;
	}
	
	return EXIT_SUCCESS;
}
