#include "_internet.h"


static string ipAddress = "127.0.0.1";			// IP Address of the server
static int port = 54000;						// Listening port # on the server
static WSAData data2;
static WORD ver = MAKEWORD(2, 2);
static SOCKET sock = socket(AF_INET, SOCK_STREAM, 0);

//Connectting TCP/IP
void internet::connectting()
{

	// Initialize WinSock
	WSAData data2;
	WORD ver = MAKEWORD(2, 2);
	int wsResult = WSAStartup(ver, &data2);
	if (wsResult != 0)
	{
		cerr << "Can't start Winsock, Err #" << wsResult << endl;
		return;
	}

	// Create socket
	sock = socket(AF_INET, SOCK_STREAM, 0);
	if (sock == INVALID_SOCKET)
	{
		cerr << "Can't create socket, Err #" << WSAGetLastError() << endl;
		WSACleanup();
		return;
	}

	// Fill in a hint structure
	sockaddr_in hint;
	hint.sin_family = AF_INET;
	hint.sin_port = htons(port);
	inet_pton(AF_INET, ipAddress.c_str(), &hint.sin_addr);

	// Connect to server
	int connResult = connect(sock, (sockaddr*)&hint, sizeof(hint));
	if (connResult == SOCKET_ERROR)
	{
		cerr << "Can't connect to server, Err #" << WSAGetLastError() << endl;
		closesocket(sock);
		WSACleanup();
		return;
	}
}

//Disconnectting TCP/IP
void internet::disconnectting()
{
	closesocket(sock);
	WSACleanup();
}

//Send chuỗi
int internet::sendjson(char* str)
{
	return send(sock, str, strlen(str), 0);
}

char* internet::listen()
{
	char buf[4096] = { 0 };
	while (recv(sock, buf, 4096, 0) < 0);
	return buf;
}
char* createjson::json(int x, int y)
{
	cJSON* root;
	root = cJSON_CreateObject();
	cJSON_AddNumberToObject(root, "toadox", x);
	cJSON_AddNumberToObject(root, "toadoy", y);
	return  (char*)cJSON_Print(root);
	cJSON_Delete(root);
}
char* createjson::json(int x, int y, int xacnhandanh)
{
	cJSON* root;
	root = cJSON_CreateObject();
	//cJSON_AddNumberToObject(root, "nguoichoi", nguoi);
	cJSON_AddNumberToObject(root, "toadox", x);
	cJSON_AddNumberToObject(root, "toadoy", y);
	cJSON_AddNumberToObject(root, "enter", xacnhandanh);
	return  (char*)cJSON_Print(root);
	cJSON_Delete(root);
}
char* createjson::json(char* user, char* paswd)
{
	cJSON* root;
	root = cJSON_CreateObject();
	//cJSON_AddNumberToObject(root, "nguoichoi", nguoi);
	cJSON_AddStringToObject(root, "username", user);
	cJSON_AddStringToObject(root, "password", paswd);
	return  (char*)cJSON_Print(root);
	cJSON_Delete(root);
}
int createjson::intxOBj(char* payloadlogin)
{
	cJSON* root = cJSON_Parse(payloadlogin);
	cJSON* turn = cJSON_DetachItemFromObject(root, "toadox");
	return cJSON_GetNumberValue(turn);
}
int createjson::intyOBj(char* payloadlogin)
{
	cJSON* root = cJSON_Parse(payloadlogin);
	cJSON* turn = cJSON_DetachItemFromObject(root, "toadoy");
	return cJSON_GetNumberValue(turn);
}
int createjson::intenterOBj(char* payloadlogin)
{
	cJSON* root = cJSON_Parse(payloadlogin);
	cJSON* turn = cJSON_DetachItemFromObject(root, "enter");
	return cJSON_GetNumberValue(turn);
}

