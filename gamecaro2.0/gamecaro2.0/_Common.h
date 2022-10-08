#pragma once


#define BC_SIZE			16   // SIZE BÀN CỜ 
#define BC_Black		0
#define BC_DarkBlue		1
#define BC_DarkGreen	2
#define BC_DarkCyan		3
#define BC_DarkRed		4
#define BC_DarkPink		5
#define BC_DarkYellow	6
#define BC_DarkWhite	7
#define BC_Grey			8
#define BC_Blue			9
#define BC_Green		10
#define BC_Cyan			11
#define BC_Red			12
#define BC_Pink			13
#define BC_Yellow		14
#define BC_White		15
#define BC_defaultColor	7 
class _Common
{
public:
	// Cố định màn hình Console
	static void fixConsoleWindow();
	
	// Di chuyển đến tọa độ (x,y) trong màn hình Console
	static void gotoXY(int, int);
	
	// Chỉnh size của màn hình Console 
	static void setConsoleWindow(int w, int h);
	
	static void HienTroChuot();
	static void AnTroChuot();
	static void Textcolor(int color);

public:
	_Common();
	~_Common();
};

