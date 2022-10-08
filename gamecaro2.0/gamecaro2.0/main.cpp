#include "_Play.h"
#include "_Common.h"
#include "_Board.h"
#include "_Game.h"
#include <iostream>
#include "_Point.h"
#include "_internet.h"



void main()
{
	int n = 100;
	internet::connectting();
	//khoa giao dien console
	_Common::fixConsoleWindow();
	_Common::setConsoleWindow(1100, 600);
	ScreenStartGame(n);

	internet::disconnectting();
	//system("pause");

}
