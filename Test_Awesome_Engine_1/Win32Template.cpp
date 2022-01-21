//must have
#include "Win32Template.h"

GameWindow window;
AWS::Square square;
AWS::Text text;

void GameWindow::initialize()
{
	text.Init();
	square.Create();
}

void GameWindow::mainLoop()
{
	text.Scl(1.0f, 1.0f, 1.0f);
	text.SetText("Hello world!", 0.5f, 0.7f, 0.2f, 1.0f);
	text.Draw();

	square.SetColor(0.3f, 0.9f, 0.5f, 1.0f);
	square.SetScale(0.5f, 0.5f, 0.5f);
	square.DrawSquare(GL_TRIANGLES);
}

int main()
{
	window.createWindow(800, 600, "Window", nullptr);

	return 0;
}