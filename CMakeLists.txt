cmake_minimum_required(VERSION 3.8)
project(ScreenDimmer)
SET(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} /subsystem:windows /ENTRY:WinMainCRTStartup")
add_executable(ScreenDimmer 
	main.cpp
	GammaRamp.cpp
	GammaRamp.h
)