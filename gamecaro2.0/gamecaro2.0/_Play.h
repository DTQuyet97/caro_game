#include <vector>
#include <conio.h>
#include "_Common.h"
#include <string.h>
//#include <mmsystem.h>
#include <iostream>
#include <fstream>
#include "_internet.h"

// MẶC ĐỊNH CÁC MÀU CƠ BẢN
//struct Diem
//{
//	int score1 = 0;
//	int score2 = 0;
//};
// Tỉ số thắng thua 

int ReadChedo(char a[30]); // Đọc chế độ chơi
void ReadNameFile();  // Đọc tên các file đã lưu
void PrintCaro();
void PrintCaro2();
void PrintCaro3();
void Screen();
// In chữ CARO 
void ScreenStartGame(int); // Menu Chính
void PrintScoreBoard(); // In bảng điểm
int PlayerVsPlayer( int, char data[30], int _pturn); // P VS P
void Help(); // Help
void About(); // About 
void LoadLoad(); // Load Game
