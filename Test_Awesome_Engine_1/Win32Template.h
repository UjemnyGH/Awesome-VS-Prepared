#pragma once
#include "src/Aws_Engine.hpp"

class GameWindow : public AWS::Window
{
	void initialize() override;
	void mainLoop() override;
};