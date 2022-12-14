#pragma once
#include "_Point.h"
#include "_Common.h"
#include <iostream>
using namespace std;

const  long Defend_Score1[7] = { 0, 8, 512, 32768, 2097152, 134217728 };
const  long Attack_Score1[7] = { 0, 64, 4096, 262144, 16777216, 1073741824 };
// 2 mảng điểm tấn công phòng thủ cho máy khó 
const  long Defend_Score2[7] = { 1, 2, 3, 1, 1, 1 };
const  long Attack_Score2[7] = { 2, 3, 4, 5, 6, 7 };
// 2 mảng điểm tấn công phòng thủ cho máy dễ

//Class borad để lấy size, tọa độ phía trên, trái, mảng 2 chiều từ i,j sang xy, ..
class _Board
{
private:
	// Kích thước bàn cờ (size x size)
	int _size;
	
	// Tọa độ phía bên trái và trên bàn cờ.
	int _left;
	int _top;
	
	// Mảng 2 chiều để chuyển đổi tọa độ (x,y) thành các ô trong mảng 2 chiều .
	_Point** _pArr;
	
public:
	// Lấy giá trị _size
	int getSize();
	
	// Lấy giá trị _left
	int getLeft();
	
	// Lấy giá trị _top
	int getTop();

	// Lấy tọa độ x,y tại vị trí i,j trên bàn cờ mảng 2 chiều _pArr
	int getXAt(int, int);

	// Lấy tọa độ x,y tại vị trí i,j trên bàn cờ mảng 2 chiều _pArr
	int getYAt(int, int);
	
	// Lấy giá trị _check trên mảng 2 chiều . nhận biết X O và ô trống.
	int get_Check(int i, int j) { return _pArr[i][j].getCheck(); }
	
	// Load dữ liệu 
	void loadData(int, int, int);
	
	// Reset bàn cờ cho tất cả các ô trống _check = 0.
	void resetData();
	
	// Vẽ bàn cờ
	void drawBoard();
	
	// Kiểm tra X hay O
	int checkBoard(int, int, bool);
	
	// Kiểm tra thắng thua trên bàn cờ
	int testBoard(int x, int y);
	

	// Duyệt Các Ô Trống tính điểm cho từng ô theo dọc , ngang , chéo ngược , chéo xuôi.
	_Point Tim_Kiem_NuocDi_1(); // Tìm nước đi cho máy khó 
	_Point Tim_Kiem_NuocDi_2(); // Tìm nước đi cho máy dễ
	long SoDiemTanCong_DuyetDoc(long, long, const long Defend_Score[], const long Attack_Score[]);
	long SoDiemTanCong_DuyetNgang(long, long, const long Defend_Score[], const long Attack_Score[]);
	long SoDiemTanCong_DuyetCheo1(long, long, const long Defend_Score[], const long Attack_Score[]);
	long SoDiemTanCong_DuyetCheo2(long, long, const long Defend_Score[], const long Attack_Score[]);
	long SoDiemPhongThu_DuyetDoc(long, long, const long Defend_Score[], const long Attack_Score[]);
	long SoDiemPhongThu_DuyetNgang(long, long, const long Defend_Score[], const long Attack_Score[]);
	long SoDiemPhongThu_DuyetCheo1(long, long, const long Defend_Score[], const long Attack_Score[]);
	long SoDiemPhongThu_DuyetCheo2(long, long, const long Defend_Score[], const long Attack_Score[]);
	
public:
	// value (-1 hoac 1 ) hay X hoac O
	// Kiểm tra thắng theo dòng
	int checkWinRow(int x, int y, int value);

	// Kiểm tra thắng theo cột
	int checkWinCol(int x, int y, int value);

	// Kiểm tra thắng theo đường chéo thứ 1
	int checkfirstDiagonal(int x, int y, int value);
	
	// Kiểm tra thắng theo đường chéo thứ 2
	int checksecondDiagonal(int x, int y, int value);
	
	int CountX; // Đếm nước cờ X
	int CountY; // Đếm nước cờ O
public:
	_Board();
	_Board(int pSize, int pX, int pY);
	~_Board();
};