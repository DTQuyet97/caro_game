#pragma once
#include <WS2tcpip.h>
#include <iostream>
#include <string>
#include "cJSON.h"
#pragma comment(lib, "ws2_32.lib")
using namespace std;

class internet
{
public:
	//Hàm connectting to TCP/IP
	static void connectting();

	//Hàm Disconnetting to TCP/IP
	static void disconnectting();

	//Hàm send chuỗi JSON
	static int sendjson(char*);

	//Hàm while chờ nghe dữ liệu từ server
	static char* listen();
};
class createjson
{
public:
	//Hàm tạo chuỗi JSON từ x,y khi di chuyển trỏ
	static char* json(int x, int y);

	//Hàm tạo JSON khi trỏ và ấn Enter xác nhận đánh
	static char* json(int x, int y, int xacnhandanh);

	//Hàm tạo chuỗi JSON khi send username và pass
	static char* json(char* user, char* paswd);

	//Hàm trả về giá trị int từ object JSON
	static int intxOBj(char* payloadlogin);
	static int intyOBj(char* payloadlogin);
	static int intenterOBj(char* payloadlogin);
	//int login();
};