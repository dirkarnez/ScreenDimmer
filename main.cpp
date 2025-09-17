#include <windows.h>
#include "gammaramp.h"


// int WINAPI WinMain(
//   HINSTANCE hInstance,      // handle to current instance
//   HINSTANCE hPrevInstance,  // handle to previous instance
//   LPSTR lpCmdLine,          // command line
//   int nCmdShow              // show state
// )

#include <iostream>

int main(int argc, char * argv[])
{
	//Example for changing the brightness with CGammaRamp class:
	//Be aware that this exmaple may not work properly in all
	//Video cards.

	CGammaRamp GammaRamp;
	string command = std::string(argv[1]);
	
	if (command == "on") {
		//Make the screen darker:
		GammaRamp.SetBrightness(NULL, 10);
	} else if (command == "off") {
		//Return back to normal:
		//GammaRamp.SetBrightness(NULL, 128);
	}

	return 0;
}
