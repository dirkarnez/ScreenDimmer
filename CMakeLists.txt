cmake_minimum_required(VERSION 3.18)
project("ScreenDimmer")

# set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} /subsystem:windows /ENTRY:WinMainCRTStartup")

add_executable(ScreenDimmer WIN32
	"main.cpp"
	"GammaRamp.cpp"
	"GammaRamp.h"
)

# target_link_libraries(${PROJECT_NAME} portaudio_static)
target_link_options(${PROJECT_NAME} PRIVATE "-static")
