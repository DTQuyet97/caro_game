#include "_Play.h"
#include "_Game.h"
#include <Windows.h>

using namespace std;
struct Name {
	char data[30];
};
vector <Name> ch;


int ReadChedo(char a[30])
{
	int d1, d2;
	int chedo = 0;
	system("cls");
	ifstream f;
	f.open(a, ios::in);
	if (!f) {
		_Common::gotoXY(35, 46);
		cout << "\n FILE KHONG TON TAI!" << endl;
		Sleep(1000);
		ScreenStartGame(99);
	}
	else
		f >> d1 >> d2 >> chedo;
	f.close();
	return chedo;
}
void ReadNameFile()
{
	_Common::Textcolor(BC_Cyan);
	_Common::gotoXY(60, 18);
	cout << "LIST FILE NAME";
	int i = 19;
	ifstream f;
	f.open("Name.txt", ios::in);
	while (!f.eof())
	{
		char s[30];
		f >> s;
		_Common::gotoXY(50, i);
		cout << s;
		i++;
	}
	f.close();
}
void PrintCaro()
{
	int x = 25, y = 0;
	_Common::Textcolor(rand() % 15 + 1);
	_Common::gotoXY(x, y);				   cout << "ooooooooooooo";
	_Common::gotoXY(x - 3, y + 1);			cout << "oooooooooooooooo";
	_Common::gotoXY(x - 5, y + 2);    cout << "oooooooooooooooooo";
	_Common::gotoXY(x - 6, y + 3);   cout << "ooooooooooooooooooo";
	_Common::Textcolor(rand() % 15 + 1);
	_Common::gotoXY(x - 7, y + 4);  cout << "ooooooo";
	_Common::gotoXY(x - 8, y + 5); cout << "ooooooo";
	_Common::gotoXY(x - 8, y + 6); cout << "ooooooo";
	_Common::gotoXY(x - 8, y + 7); cout << "ooooooo";
	_Common::gotoXY(x - 8, y + 8); cout << "ooooooo";
	_Common::gotoXY(x - 8, y + 9); cout << "ooooooo";
	_Common::Textcolor(rand() % 15 + 1);
	_Common::gotoXY(x - 8, y + 10);cout << "ooooooo";
	_Common::gotoXY(x - 7, y + 11); cout << "ooooooo";
	_Common::gotoXY(x - 6, y + 12);  cout << "ooooooooooooooooooo";
	_Common::gotoXY(x - 5, y + 13);   cout << "oooooooooooooooooo";
	_Common::Textcolor(rand() % 15 + 1);
	_Common::gotoXY(x - 3, y + 14);		cout << "oooooooooooooooo";
	_Common::gotoXY(x, y + 15);			   cout << "ooooooooooooo";
	_Common::Textcolor(rand() % 15 + 1);
	_Common::gotoXY(x - 4 + 22, y + 4);				    cout << "ooooooooooo";
	_Common::gotoXY(x - 4 + 22 - 2, y + 5);		      cout << "ooooooooooooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 6);		     cout << "ooooooooooooooooo";
	_Common::Textcolor(rand() % 15 + 1);
	_Common::gotoXY(x - 4 + 22 - 3, y + 7);			 cout << "ooooooooooooooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 8);			 cout << "oooooo     oooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 9);			 cout << "oooooo     oooooo";
	_Common::Textcolor(rand() % 15 + 1);
	_Common::gotoXY(x - 4 + 22 - 3, y + 10);		 cout << "oooooo     oooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 11);		 cout << "ooooooooooooooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 12);		 cout << "oooooo     oooooo";
	_Common::Textcolor(rand() % 15 + 1);
	_Common::gotoXY(x - 4 + 22 - 3, y + 13);		 cout << "oooooo     oooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 14);		 cout << "oooooo     oooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 15);		 cout << "oooooo     oooooo";

	_Common::Textcolor(rand() % 15 + 1);

	_Common::gotoXY(x + 33, y + 4);			cout << "ooooo   ooooooooo";
	_Common::gotoXY(x + 33, y + 5);			cout << "oooooooooooooooooo";
	_Common::gotoXY(x + 33, y + 6);			cout << "ooooooooooooooooooo";
	_Common::Textcolor(rand() % 15 + 1);
	_Common::gotoXY(x + 33, y + 7);			cout << "oooooooooooooooooooo";
	_Common::gotoXY(x + 1 + 33, y + 8);			 cout << "ooooooo     ooooooo";
	_Common::gotoXY(x + 1 + 33, y + 9);			 cout << "ooooooo     ooooooo";
	_Common::Textcolor(rand() % 15 + 1);
	_Common::gotoXY(x + 1 + 33, y + 10);		 cout << "ooooooo";
	_Common::gotoXY(x + 1 + 33, y + 11);		 cout << "ooooooo";
	_Common::gotoXY(x + 1 + 33, y + 12);		 cout << "ooooooo";
	_Common::Textcolor(rand() % 15 + 1);
	_Common::gotoXY(x + 1 + 33, y + 13);		 cout << "ooooooo";
	_Common::gotoXY(x + 1 + 33, y + 14);		 cout << "ooooooo";
	_Common::gotoXY(x + 1 + 33, y + 15);		 cout << "ooooooo";
	_Common::Textcolor(BC_Yellow);
	_Common::gotoXY(x + 57, y + 4);					cout << "ooooooooooo";
	_Common::gotoXY(x + 57 - 2, y + 5);			  cout << "ooooooooooooooo";
	_Common::Textcolor(rand() % 15 + 1);
	_Common::gotoXY(x + 57 - 3, y + 6);			 cout << "ooooooooooooooooo";
	_Common::gotoXY(x + 57 - 3, y + 7);			 cout << "ooooooooooooooooo";
	_Common::Textcolor(rand() % 15 + 1);
	_Common::gotoXY(x + 57 - 3, y + 8);			 cout << "oooooo     oooooo";
	_Common::gotoXY(x + 57 - 3, y + 9);			 cout << "oooooo     oooooo";
	_Common::gotoXY(x + 57 - 3, y + 10);		 cout << "oooooo     oooooo";
	_Common::gotoXY(x + 57 - 3, y + 11);		 cout << "oooooo     oooooo";
	_Common::Textcolor(rand() % 15 + 1);
	_Common::gotoXY(x + 57 - 3, y + 12);		 cout << "ooooooooooooooooo";
	_Common::gotoXY(x + 57 - 3, y + 13);		 cout << "ooooooooooooooooo";
	_Common::Textcolor(rand() % 15 + 1);
	_Common::gotoXY(x + 57 - 2, y + 14);		  cout << "ooooooooooooooo";
	_Common::gotoXY(x + 57, y + 15);				cout << "ooooooooooo";



}
void PrintCaro2()
{
	int x = 25, y = 0;
	Sleep(200);
	_Common::Textcolor(BC_Red);
	_Common::gotoXY(x, y);				   cout << "ooooooooooooo";
	_Common::gotoXY(x - 3, y + 1);			cout << "oooooooooooooooo";
	_Common::gotoXY(x - 5, y + 2);    cout << "oooooooooooooooooo";
	_Common::gotoXY(x - 6, y + 3);   cout << "ooooooooooooooooooo";
	_Common::gotoXY(x - 7, y + 4);  cout << "ooooooo";
	_Common::gotoXY(x - 8, y + 5); cout << "ooooooo";
	_Common::gotoXY(x - 8, y + 6); cout << "ooooooo";
	_Common::gotoXY(x - 8, y + 7); cout << "ooooooo";
	_Common::gotoXY(x - 8, y + 8); cout << "ooooooo";
	_Common::gotoXY(x - 8, y + 9); cout << "ooooooo";
	_Common::gotoXY(x - 8, y + 10); cout << "ooooooo";
	_Common::gotoXY(x - 7, y + 11); cout << "ooooooo";
	_Common::gotoXY(x - 6, y + 12);  cout << "ooooooooooooooooooo";
	_Common::gotoXY(x - 5, y + 13);   cout << "oooooooooooooooooo";
	_Common::gotoXY(x - 3, y + 14);		cout << "oooooooooooooooo";
	_Common::gotoXY(x, y + 15);			   cout << "ooooooooooooo";
	Sleep(200);
	_Common::Textcolor(BC_Green);
	_Common::gotoXY(x - 4 + 22, y + 4);				    cout << "ooooooooooo";
	_Common::gotoXY(x - 4 + 22 - 2, y + 5);		      cout << "ooooooooooooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 6);		     cout << "ooooooooooooooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 7);			 cout << "ooooooooooooooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 8);			 cout << "oooooo     oooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 9);			 cout << "oooooo     oooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 10);		 cout << "oooooo     oooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 11);		 cout << "ooooooooooooooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 12);		 cout << "oooooo     oooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 13);		 cout << "oooooo     oooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 14);		 cout << "oooooo     oooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 15);		 cout << "oooooo     oooooo";
	Sleep(200);
	_Common::Textcolor(BC_Blue);

	_Common::gotoXY(x + 33, y + 4);			cout << "ooooo   ooooooooo";
	_Common::gotoXY(x + 33, y + 5);			cout << "oooooooooooooooooo";
	_Common::gotoXY(x + 33, y + 6);			cout << "ooooooooooooooooooo";
	_Common::gotoXY(x + 33, y + 7);			cout << "oooooooooooooooooooo";
	_Common::gotoXY(x + 1 + 33, y + 8);			 cout << "ooooooo     ooooooo";
	_Common::gotoXY(x + 1 + 33, y + 9);			 cout << "ooooooo     ooooooo";
	_Common::gotoXY(x + 1 + 33, y + 10);		 cout << "ooooooo";
	_Common::gotoXY(x + 1 + 33, y + 11);		 cout << "ooooooo";
	_Common::gotoXY(x + 1 + 33, y + 12);		 cout << "ooooooo";
	_Common::gotoXY(x + 1 + 33, y + 13);		 cout << "ooooooo";
	_Common::gotoXY(x + 1 + 33, y + 14);		 cout << "ooooooo";
	_Common::gotoXY(x + 1 + 33, y + 15);		 cout << "ooooooo";
	Sleep(200);
	_Common::Textcolor(BC_Yellow);
	_Common::gotoXY(x + 57, y + 4);					cout << "ooooooooooo";
	_Common::gotoXY(x + 57 - 2, y + 5);			  cout << "ooooooooooooooo";
	_Common::gotoXY(x + 57 - 3, y + 6);			 cout << "ooooooooooooooooo";
	_Common::gotoXY(x + 57 - 3, y + 7);			 cout << "ooooooooooooooooo";
	_Common::gotoXY(x + 57 - 3, y + 8);			 cout << "oooooo     oooooo";
	_Common::gotoXY(x + 57 - 3, y + 9);			 cout << "oooooo     oooooo";
	_Common::gotoXY(x + 57 - 3, y + 10);		 cout << "oooooo     oooooo";
	_Common::gotoXY(x + 57 - 3, y + 11);		 cout << "oooooo     oooooo";
	_Common::gotoXY(x + 57 - 3, y + 12);		 cout << "ooooooooooooooooo";
	_Common::gotoXY(x + 57 - 3, y + 13);		 cout << "ooooooooooooooooo";
	_Common::gotoXY(x + 57 - 2, y + 14);		  cout << "ooooooooooooooo";
	_Common::gotoXY(x + 57, y + 15);				cout << "ooooooooooo";
	_Common::Textcolor(BC_defaultColor);


}
void PrintCaro3()
{
	int x = 25, y = 0;
	_Common::Textcolor(BC_Red);
	_Common::gotoXY(x, y);				   cout << "ooooooooooooo";
	_Common::gotoXY(x - 3, y + 1);			cout << "oooooooooooooooo";
	_Common::gotoXY(x - 5, y + 2);    cout << "oooooooooooooooooo";
	_Common::gotoXY(x - 6, y + 3);   cout << "ooooooooooooooooooo";
	_Common::gotoXY(x - 7, y + 4);  cout << "ooooooo";
	_Common::gotoXY(x - 8, y + 5); cout << "ooooooo";
	_Common::gotoXY(x - 8, y + 6); cout << "ooooooo";
	_Common::gotoXY(x - 8, y + 7); cout << "ooooooo";
	_Common::gotoXY(x - 8, y + 8); cout << "ooooooo";
	_Common::gotoXY(x - 8, y + 9); cout << "ooooooo";
	_Common::gotoXY(x - 8, y + 10); cout << "ooooooo";
	_Common::gotoXY(x - 7, y + 11); cout << "ooooooo";
	_Common::gotoXY(x - 6, y + 12);  cout << "ooooooooooooooooooo";
	_Common::gotoXY(x - 5, y + 13);   cout << "oooooooooooooooooo";
	_Common::gotoXY(x - 3, y + 14);		cout << "oooooooooooooooo";
	_Common::gotoXY(x, y + 15);			   cout << "ooooooooooooo";
	_Common::Textcolor(BC_Green);
	_Common::gotoXY(x - 4 + 22, y + 4);				    cout << "ooooooooooo";
	_Common::gotoXY(x - 4 + 22 - 2, y + 5);		      cout << "ooooooooooooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 6);		     cout << "ooooooooooooooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 7);			 cout << "ooooooooooooooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 8);			 cout << "oooooo     oooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 9);			 cout << "oooooo     oooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 10);		 cout << "oooooo     oooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 11);		 cout << "ooooooooooooooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 12);		 cout << "oooooo     oooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 13);		 cout << "oooooo     oooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 14);		 cout << "oooooo     oooooo";
	_Common::gotoXY(x - 4 + 22 - 3, y + 15);		 cout << "oooooo     oooooo";
	_Common::Textcolor(BC_Blue);

	_Common::gotoXY(x + 33, y + 4);			cout << "ooooo   ooooooooo";
	_Common::gotoXY(x + 33, y + 5);			cout << "oooooooooooooooooo";
	_Common::gotoXY(x + 33, y + 6);			cout << "ooooooooooooooooooo";
	_Common::gotoXY(x + 33, y + 7);			cout << "oooooooooooooooooooo";
	_Common::gotoXY(x + 1 + 33, y + 8);			 cout << "ooooooo     ooooooo";
	_Common::gotoXY(x + 1 + 33, y + 9);			 cout << "ooooooo     ooooooo";
	_Common::gotoXY(x + 1 + 33, y + 10);		 cout << "ooooooo";
	_Common::gotoXY(x + 1 + 33, y + 11);		 cout << "ooooooo";
	_Common::gotoXY(x + 1 + 33, y + 12);		 cout << "ooooooo";
	_Common::gotoXY(x + 1 + 33, y + 13);		 cout << "ooooooo";
	_Common::gotoXY(x + 1 + 33, y + 14);		 cout << "ooooooo";
	_Common::gotoXY(x + 1 + 33, y + 15);		 cout << "ooooooo";
	_Common::Textcolor(BC_Yellow);
	_Common::gotoXY(x + 57, y + 4);					cout << "ooooooooooo";
	_Common::gotoXY(x + 57 - 2, y + 5);			  cout << "ooooooooooooooo";
	_Common::gotoXY(x + 57 - 3, y + 6);			 cout << "ooooooooooooooooo";
	_Common::gotoXY(x + 57 - 3, y + 7);			 cout << "ooooooooooooooooo";
	_Common::gotoXY(x + 57 - 3, y + 8);			 cout << "oooooo     oooooo";
	_Common::gotoXY(x + 57 - 3, y + 9);			 cout << "oooooo     oooooo";
	_Common::gotoXY(x + 57 - 3, y + 10);		 cout << "oooooo     oooooo";
	_Common::gotoXY(x + 57 - 3, y + 11);		 cout << "oooooo     oooooo";
	_Common::gotoXY(x + 57 - 3, y + 12);		 cout << "ooooooooooooooooo";
	_Common::gotoXY(x + 57 - 3, y + 13);		 cout << "ooooooooooooooooo";
	_Common::gotoXY(x + 57 - 2, y + 14);		  cout << "ooooooooooooooo";
	_Common::gotoXY(x + 57, y + 15);				cout << "ooooooooooo";
	_Common::Textcolor(BC_defaultColor);

}
void About()
{
	system("cls");
	PrintCaro3();
	_Common::Textcolor(BC_Cyan);
	_Common::gotoXY(60, 18);
	cout << "ABOUT";
	_Common::gotoXY(50, 21);
	cout << "GAME CO CARO FROM VULE" << endl;
	_Common::gotoXY(50, 22);
	cout << "-> VuLP4" << endl;
	_Common::gotoXY(50, 23);
	cout << "-> Ho ten : LE PHU VU" << endl;
	_Common::gotoXY(50, 24);
	cout << "-> Phong nguon luc" << endl;
	_Common::gotoXY(50, 25);
	cout << "-> Dai Ca Huong Dan: ToiDV " << endl;

	_Common::gotoXY(50, 26);
	cout << "-> Chuc moi nguoi choi game vui ve !!" << endl;
	_Common::gotoXY(60, 30);
	cout << "BACK";
	char command = ' ';
	command = _getch();
	system("cls");
}
void Help()
{
	system("cls");
	PrintCaro3();
	_Common::Textcolor(BC_Cyan);
	_Common::gotoXY(60, 18);
	cout << "HELP";
	_Common::gotoXY(50, 21);
	cout << "HUONG DAN" << endl;
	_Common::gotoXY(50, 22);
	cout << "1. Ban co gom 16x16 o vuong." << endl;
	_Common::gotoXY(50, 23);
	cout << "2. Su dung cac phim W A S D de di chuyen va Enter de danh." << endl;
	_Common::gotoXY(50, 24);
	cout << "3. Luat choi cu du 5 quan co X hoac O theo hang ngang, doc, cheo se chien thang." << endl;
	_Common::gotoXY(50, 25);
	cout << "4. Luat choi tuan theo quy dinh chan 2 dau " << endl;

	_Common::gotoXY(50, 26);
	cout << "-> Chuc moi nguoi choi game vui ve !!" << endl;
	_Common::gotoXY(60, 30);
	cout << "BACK";
	char command = ' ';
	command = _getch();
	system("cls");
}
void LoadLoad()
{
	int n = 100;
	system("cls");
	PrintCaro3();
	ReadNameFile();
	char data[30];
	_Common::gotoXY(50, 32);
	_Common::HienTroChuot();
	cout << "ENTER FILE NAME: ";
	cin.getline(data, 30);
	int chedo = ReadChedo(data);
	if (chedo == -30 || chedo == -31)
	{
		//Diem a;
		//a.score1 = 0;
		//a.score2 = 0;
		int t = PlayerVsPlayer(chedo, data, 2);
		if (t == 27)
		{
			system("cls");
			ScreenStartGame(n - 1);
		}
	}
	//if (chedo == -4)
	//{
	//	Diem a;
	//	a.score1 = 0;
	//	a.score2 = 0;
	//	int t = PlayerVsCom2(a, -4, data);
	//	if (t == 27)
	//	{
	//		system("cls");
	//		ScreenStartGame(n - 1);
	//	}
	//}
	//if (chedo == -5)
	//{
	//	Diem a;
	//	a.score1 = 0;
	//	a.score2 = 0;
	//	int t = PlayerVsCom(a, -5, data);
	//	if (t == 27)
	//	{
	//		system("cls");
	//		ScreenStartGame(n - 1);
	//	}
	//}
}
void ScreenStartGame(int n)
{
	char* msg = NULL;
	_Common::AnTroChuot();
	int x = 50, y = 20;
	//int i;
	char s[30] = " ";
	int check = 1;
	_Common::Textcolor(BC_Red);
	_Common::gotoXY(50, 20); cout << "Player Vs Player";
	_Common::Textcolor(7);
	_Common::gotoXY(50, 21); cout << "Player Vs Computer (Easy)";
	_Common::gotoXY(50, 22); cout << "Player Vs Computer (Hard)";
	_Common::gotoXY(50, 23); cout << "Load Game";
	_Common::gotoXY(50, 24); cout << "Help";
	_Common::gotoXY(50, 25); cout << "About";
	_Common::gotoXY(50, 26); cout << "Exit";
	_Common::gotoXY(50, 32); cout << "....... W - S : Move ( Off Unikey - Off Caps Lock ) ";
	_Common::gotoXY(50, 33); cout << "....... Enter : Select ";
	if (n == 100)
	{
		PlaySound(TEXT("nhacnen.wav"), NULL, SND_FILENAME | SND_ASYNC);
		Screen();
		PrintCaro2();
	}
	else
		PrintCaro3();

	while (check)
	{
		if (_kbhit())
		{
			switch (_getch())
			{
			case 'w':
				PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
				if (y > 20)
				{
					y--;
					_Common::gotoXY(x, y);
				}
				if (y == 20)
				{
					_Common::Textcolor(BC_Red);
					_Common::gotoXY(50, 20); cout << "Player Vs Player";
					_Common::Textcolor(7);
					_Common::gotoXY(50, 21); cout << "Player Vs Computer (Easy)";
					_Common::gotoXY(50, 22); cout << "Player Vs Computer (Hard)";
					_Common::gotoXY(50, 23); cout << "Load Game";
					_Common::gotoXY(50, 24); cout << "Help";
					_Common::gotoXY(50, 25); cout << "About";
					_Common::gotoXY(50, 26); cout << "Exit";
				}
				if (y == 21)
				{
					_Common::Textcolor(7);
					_Common::gotoXY(50, 20); cout << "Player Vs Player";
					_Common::Textcolor(BC_Red);
					_Common::gotoXY(50, 21); cout << "Player Vs Computer (Easy)";
					_Common::Textcolor(7);
					_Common::gotoXY(50, 22); cout << "Player Vs Computer (Hard)";
					_Common::gotoXY(50, 23); cout << "Load Game";
					_Common::gotoXY(50, 24); cout << "Help";
					_Common::gotoXY(50, 25); cout << "About";
					_Common::gotoXY(50, 26); cout << "Exit";
				}
				if (y == 22)
				{
					_Common::Textcolor(7);
					_Common::gotoXY(50, 20); cout << "Player Vs Player";
					_Common::gotoXY(50, 21); cout << "Player Vs Computer (Easy)";
					_Common::Textcolor(BC_Red);
					_Common::gotoXY(50, 22); cout << "Player Vs Computer (Hard)";
					_Common::Textcolor(7);
					_Common::gotoXY(50, 23); cout << "Load Game";
					_Common::gotoXY(50, 24); cout << "Help";
					_Common::gotoXY(50, 25); cout << "About";
					_Common::gotoXY(50, 26); cout << "Exit";
				}
				if (y == 23)
				{
					_Common::Textcolor(7);
					_Common::gotoXY(50, 20); cout << "Player Vs Player";
					_Common::gotoXY(50, 21); cout << "Player Vs Computer (Easy)";
					_Common::gotoXY(50, 22); cout << "Player Vs Computer (Hard)";
					_Common::Textcolor(BC_Red);
					_Common::gotoXY(50, 23); cout << "Load Game";
					_Common::Textcolor(7);
					_Common::gotoXY(50, 24); cout << "Help";
					_Common::gotoXY(50, 25); cout << "About";
					_Common::gotoXY(50, 26); cout << "Exit";
				}
				if (y == 24)
				{
					_Common::Textcolor(7);
					_Common::gotoXY(50, 20); cout << "Player Vs Player";
					_Common::gotoXY(50, 21); cout << "Player Vs Computer (Easy)";
					_Common::gotoXY(50, 22); cout << "Player Vs Computer (Hard)";
					_Common::gotoXY(50, 23); cout << "Load Game";
					_Common::Textcolor(BC_Red);
					_Common::gotoXY(50, 24); cout << "Help";
					_Common::Textcolor(7);
					_Common::gotoXY(50, 25); cout << "About";
					_Common::gotoXY(50, 26); cout << "Exit";
				}
				if (y == 25)
				{
					_Common::Textcolor(7);
					_Common::gotoXY(50, 20); cout << "Player Vs Player";
					_Common::gotoXY(50, 21); cout << "Player Vs Computer (Easy)";
					_Common::gotoXY(50, 22); cout << "Player Vs Computer (Hard)";
					_Common::gotoXY(50, 23); cout << "Load Game";
					_Common::gotoXY(50, 24); cout << "Help";
					_Common::Textcolor(BC_Red);
					_Common::gotoXY(50, 25); cout << "About";
					_Common::Textcolor(7);
					_Common::gotoXY(50, 26); cout << "Exit";
				}
				if (y == 26)
				{
					_Common::Textcolor(7);
					_Common::gotoXY(50, 20); cout << "Player Vs Player";
					_Common::gotoXY(50, 21); cout << "Player Vs Computer (Easy)";
					_Common::gotoXY(50, 22); cout << "Player Vs Computer (Hard)";
					_Common::gotoXY(50, 23); cout << "Load Game";
					_Common::gotoXY(50, 24); cout << "Help";
					_Common::Textcolor(BC_Red);
					_Common::gotoXY(50, 25); cout << "About";
					_Common::Textcolor(7);
					_Common::gotoXY(50, 26); cout << "Exit";
				}
				break;
			case 's':
				PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
				if (y < 26)
				{
					y++;
					_Common::gotoXY(x, y);
				}
				if (y == 20)
				{
					_Common::Textcolor(BC_Red);
					_Common::gotoXY(50, 20); cout << "Player Vs Player";
					_Common::Textcolor(7);
					_Common::gotoXY(50, 21); cout << "Player Vs Computer (Easy)";
					_Common::gotoXY(50, 22); cout << "Player Vs Computer (Hard)";
					_Common::gotoXY(50, 23); cout << "Load Game";
					_Common::gotoXY(50, 24); cout << "Help";
					_Common::gotoXY(50, 25); cout << "About";
					_Common::gotoXY(50, 26); cout << "Exit";
				}
				if (y == 21)
				{
					_Common::Textcolor(7);
					_Common::gotoXY(50, 20); cout << "Player Vs Player";
					_Common::Textcolor(BC_Red);
					_Common::gotoXY(50, 21); cout << "Player Vs Computer (Easy)";
					_Common::Textcolor(7);
					_Common::gotoXY(50, 22); cout << "Player Vs Computer (Hard)";
					_Common::gotoXY(50, 23); cout << "Load Game";
					_Common::gotoXY(50, 24); cout << "Help";
					_Common::gotoXY(50, 25); cout << "About";
					_Common::gotoXY(50, 26); cout << "Exit";
				}
				if (y == 22)
				{
					_Common::Textcolor(7);
					_Common::gotoXY(50, 20); cout << "Player Vs Player";
					_Common::gotoXY(50, 21); cout << "Player Vs Computer (Easy)";
					_Common::Textcolor(BC_Red);
					_Common::gotoXY(50, 22); cout << "Player Vs Computer (Hard)";
					_Common::Textcolor(7);
					_Common::gotoXY(50, 23); cout << "Load Game";
					_Common::gotoXY(50, 24); cout << "Help";
					_Common::gotoXY(50, 25); cout << "About";
					_Common::gotoXY(50, 26); cout << "Exit";
				}
				if (y == 23)
				{
					_Common::Textcolor(7);
					_Common::gotoXY(50, 20); cout << "Player Vs Player";
					_Common::gotoXY(50, 21); cout << "Player Vs Computer (Easy)";
					_Common::gotoXY(50, 22); cout << "Player Vs Computer (Hard)";
					_Common::Textcolor(BC_Red);
					_Common::gotoXY(50, 23); cout << "Load Game";
					_Common::Textcolor(7);
					_Common::gotoXY(50, 24); cout << "Help";
					_Common::gotoXY(50, 25); cout << "About";
					_Common::gotoXY(50, 26); cout << "Exit";
				}
				if (y == 24)
				{
					_Common::Textcolor(7);
					_Common::gotoXY(50, 20); cout << "Player Vs Player";
					_Common::gotoXY(50, 21); cout << "Player Vs Computer (Easy)";
					_Common::gotoXY(50, 22); cout << "Player Vs Computer (Hard)";
					_Common::gotoXY(50, 23); cout << "Load Game";
					_Common::Textcolor(BC_Red);
					_Common::gotoXY(50, 24); cout << "Help";
					_Common::Textcolor(7);
					_Common::gotoXY(50, 25); cout << "About";
					_Common::gotoXY(50, 26); cout << "Exit";
				}
				if (y == 25)
				{
					_Common::Textcolor(7);
					_Common::gotoXY(50, 20); cout << "Player Vs Player";
					_Common::gotoXY(50, 21); cout << "Player Vs Computer (Easy)";
					_Common::gotoXY(50, 22); cout << "Player Vs Computer (Hard)";
					_Common::gotoXY(50, 23); cout << "Load Game";
					_Common::gotoXY(50, 24); cout << "Help";
					_Common::Textcolor(BC_Red);
					_Common::gotoXY(50, 25); cout << "About";
					_Common::Textcolor(7);
					_Common::gotoXY(50, 26); cout << "Exit";
				}
				if (y == 26)
				{
					_Common::Textcolor(7);
					_Common::gotoXY(50, 20); cout << "Player Vs Player";
					_Common::gotoXY(50, 21); cout << "Player Vs Computer (Easy)";
					_Common::gotoXY(50, 22); cout << "Player Vs Computer (Hard)";
					_Common::gotoXY(50, 23); cout << "Load Game";
					_Common::gotoXY(50, 24); cout << "Help";
					_Common::gotoXY(50, 25); cout << "About";
					_Common::Textcolor(BC_Red);
					_Common::gotoXY(50, 26); cout << "Exit";
				}
				break;
			case 13:	// ấn Enter chọn chơi player vs player
				PlaySound(TEXT("tick.wav"), NULL, SND_FILENAME | SND_ASYNC);
				if (y == 20)
				{
					/*string user = "vule";
					string pasword = "haiyen0807";
					char* payloadlogin = NULL;
					char* login = createjson::json(const_cast<char*>(user.c_str()), const_cast<char*>(pasword.c_str()));
					internet::sendjson(login);
					payloadlogin = internet::listen();
					int turn = createjson::intOBj(payloadlogin, (char*)"turn");*/
					//Diem a;
					//a.score1 = 0;
					//a.score2 = 0;
					//_Game::setTurn(turn);
					int t = PlayerVsPlayer(0, s, 1);
					if (t == 27)
					{
						system("cls");
						ScreenStartGame(99);
					}
				}
				//if (y == 21)
				//{
				//	Diem a;
				//	a.score1 = 0;
				//	a.score2 = 0;
				//	int t = PlayerVsCom2(a, 0, s);
				//	if (t == 27)
				//	{
				//		system("cls");
				//		ScreenStartGame(99);
				//	}
				//}
				//if (y == 22)
				//{
				//	Diem a;
				//	a.score1 = 0;
				//	a.score2 = 0;
				//	int t = PlayerVsCom(a, 0, s);
				//	if (t == 27)
				//	{
				//		system("cls");
				//		ScreenStartGame(99);
				//	}
				//}
				if (y == 23)
				{
					LoadLoad();

				}
				if (y == 24)
				{
					Help();
					ScreenStartGame(99);
				}
				if (y == 25)
				{
					About();
					ScreenStartGame(99);
				}
				if (y == 26)
				{
					exit(0);
				}
				break;
			}
		}
	}
}

//in bang diem va cot cua bang diem
void PrintScoreBoard()
{
	_Common::Textcolor(BC_Pink);
	// cot doc
	for (int i = 1; i < BC_SIZE * 2; i++) {
		Sleep(1);
		_Common::gotoXY(BC_SIZE * 4 + 18, i);
		cout << char(219);
	}
	_Common::Textcolor(BC_DarkPink);
	for (int i = 1; i < BC_SIZE * 2; i++) {
		Sleep(1);
		_Common::gotoXY(BC_SIZE * 4 + 17, i);
		cout << char(219);
	}
	//
	_Common::Textcolor(BC_White);
	Sleep(1);
	_Common::gotoXY(BC_SIZE * 4 + 1, (BC_SIZE * 2 - 1) / 2 + 1); cout << "    C A R O";
	// cot ke ben ban co
	for (int i = 0; i < (BC_SIZE * 2 - 1) / 2 - 2; i++)
	{
		Sleep(1);
		_Common::gotoXY(BC_SIZE * 4 + 1, i + 1);
		cout << char(186);
	}
	Sleep(1);
	_Common::gotoXY(BC_SIZE * 4 + 1, 0); cout << char(187);
	_Common::gotoXY(BC_SIZE * 4 + 1, BC_SIZE * 2); cout << char(188);
	for (int i = (BC_SIZE * 2 - 1) / 2 + 3; i < BC_SIZE * 2 - 1; i++)
	{
		Sleep(1);
		_Common::gotoXY(BC_SIZE * 4 + 1, i + 1);
		cout << char(186);
	}
	//
	_Common::gotoXY(BC_SIZE * 4 + 1, (BC_SIZE * 2 - 1) / 2 - 1); cout << char(200);
	for (int i = 0; i < 15; i++)
	{
		Sleep(1);
		cout << char(205);
	}
	_Common::gotoXY(BC_SIZE * 4 + 1, (BC_SIZE * 2 - 1) / 2 + 3); cout << char(201);
	for (int i = 0; i < 15; i++)
	{
		Sleep(1);
		cout << char(205);
	}
	//Bang 2
	_Common::gotoXY(BC_SIZE * 4 + 19, (BC_SIZE * 2 - 1) / 2 + 1);
	cout << char(219) << char(205) << char(205) << char(205) << char(205) << char(254);
	for (int i = 0; i < 8; i++) {
		Sleep(1);
		_Common::gotoXY(BC_SIZE * 4 + 25, 11 + i);
		cout << char(219);
	}
	for (int i = 0; i < 8; i++) {
		Sleep(1);
		_Common::gotoXY(BC_SIZE * 4 + 61, 11 + i);
		cout << char(219);
	}
	_Common::gotoXY(BC_SIZE * 4 + 25, 10);
	for (int i = 0; i < 37; i++) {
		Sleep(1);
		cout << char(220);
	}
	_Common::gotoXY(BC_SIZE * 4 + 25, 11 + 8);
	for (int i = 0; i < 37; i++) {
		Sleep(1);
		cout << char(223);
	}
	// Bang 3
	Sleep(1);
	_Common::gotoXY(BC_SIZE * 4 + 19, (BC_SIZE * 2 - 1) - 3);
	cout << char(219) << char(205) << char(205) << char(205) << char(205) << char(254);
	for (int i = 0; i < 10; i++) {
		Sleep(1);
		_Common::gotoXY(BC_SIZE * 4 + 25, BC_SIZE * 2 - i);
		cout << char(219);
	}
	for (int i = 0; i < 10; i++) {
		;
		Sleep(1);
		_Common::gotoXY(BC_SIZE * 4 + 61, BC_SIZE * 2 - i);
		cout << char(219);
	}
	_Common::gotoXY(BC_SIZE * 4 + 25, BC_SIZE * 2);
	for (int i = 0; i < 37; i++) {
		Sleep(1);
		cout << char(223);
	}
	_Common::gotoXY(BC_SIZE * 4 + 25, BC_SIZE * 2 - 10);
	for (int i = 0; i < 37; i++) {
		Sleep(1);
		cout << char(220);
	}
	// Bang 1
	Sleep(1);
	_Common::gotoXY(BC_SIZE * 4 + 19, 4);
	cout << char(219) << char(205) << char(205) << char(205) << char(205) << char(254);
	for (int i = 0; i < 8; i++) {
		Sleep(1);
		_Common::gotoXY(BC_SIZE * 4 + 25, i + 1);
		cout << char(219);
	}
	for (int i = 0; i < 8; i++) {
		Sleep(1);
		_Common::gotoXY(BC_SIZE * 4 + 61, i + 1);
		cout << char(219);
	}
	_Common::gotoXY(BC_SIZE * 4 + 25, 0);
	for (int i = 0; i < 37; i++) {
		Sleep(1);
		cout << char(220);
	}
	_Common::gotoXY(BC_SIZE * 4 + 25, 8 + 1);
	for (int i = 0; i < 37; i++) {
		Sleep(1);
		cout << char(223);
	}




	_Common::gotoXY(BC_SIZE * 4 + 40, 2);
	cout << "PLAYER 1";
	_Common::gotoXY(BC_SIZE * 4 + 30, 4);
	cout << "So quan X : ";
	_Common::gotoXY(BC_SIZE * 4 + 30, 5);
	cout << "So tran da thang : ";


	_Common::gotoXY(BC_SIZE * 4 + 40, 12);
	cout << "PLAYER 2";
	_Common::gotoXY(BC_SIZE * 4 + 30, 14);
	cout << "So quan O : ";
	_Common::gotoXY(BC_SIZE * 4 + 30, 15);
	cout << "So tran da thang : ";




	_Common::gotoXY(BC_SIZE * 4 + 30, 27);
	cout << "-----------------------";
	_Common::gotoXY(BC_SIZE * 4 + 30, 28);
	cout << " W A S D : Move ";
	_Common::gotoXY(BC_SIZE * 4 + 30, 29);
	cout << " L : Save Game ";
	_Common::gotoXY(BC_SIZE * 4 + 30, 30);
	cout << " T : Load Game ";
	_Common::gotoXY(BC_SIZE * 4 + 30, 31);
	cout << " ESC : Exit ";

	_Common::gotoXY(2, 1);
} // IN BANG DIEM
void Screen()
{
	int check = 1;
	while (check < 20)
	{
		PrintCaro();
		Sleep(100);
		check++;
	}
}

// P VS P
int PlayerVsPlayer(int load, char data[30], int _pturn)
{
	switch (_pturn)	//ai duoc danh truoc ai danh sau, 
	{
	case 1:		//-1 duoc danh
	{
		int k = 1;
		int n = 99;
		_Common::HienTroChuot();
		_Game g(BC_SIZE, 0, 0);
		g.setCountXY();
		if (load == -30)
		{
			g.setTurn();
			g.LoadGame(data);
		}
		else if (load == -31)
		{
			g.LoadGame(data);
		}
		else
			g.startGame();
		PrintScoreBoard();
		if (g.getTurn() == false)
		{
			g.setTurn();
		}
		_Common::Textcolor(BC_Cyan);
		_Common::gotoXY(BC_SIZE * 4 + 32, 24);
		cout << " PLAYER VS PLAYER ";
		_Common::Textcolor(BC_Blue);
		_Common::gotoXY(BC_SIZE * 4 + 30 + 18, 5);
		//cout << a.score1;
		_Common::Textcolor(BC_Red);
		_Common::gotoXY(BC_SIZE * 4 + 30 + 18, 15);
		//cout << a.score2;
		_Common::gotoXY(2, 1);
		while (g.isContinue())		// vào game tiếp tục return loop
		{
			//Kiểm tra nếu getturn ==1 thì cho X đánh trước chờ keyboard
			if (g.getTurn() == true)
			{
				_Common::HienTroChuot();
				g.waitKeyBoard();
				if (g.getCommand() == 27) {
					PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
					return 27;
				}

				else
				{
					switch (g.getCommand())
					{
					case 'A':
						PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
						g.moveLeft();
						break;
					case 'D':
						PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
						g.moveRight();
						break;
					case 'W':
						PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
						g.moveUp();
						break;
					case 'S':
						PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
						g.moveDown();
						break;
						/*
					case 'L':
						PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
						if (g.getTurn() == 1)
							g.SaveGame(-31);
						else
							g.SaveGame(-30);
						break;
					case 'T':
						PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
						LoadLoad();
						break;
						*/
					case 13:
						PlaySound(TEXT("tick.wav"), NULL, SND_FILENAME | SND_ASYNC);
						//lay gia tri x,y khi an Enter
						int x = g.getXatEnter();
						int y = g.getYatEnter();
						char* msg33 = createjson::json(x, y, 1);
						internet::sendjson(msg33);
						if (g.processCheckBoard()) {
							//Kieemr tra nguoi thang, =-1 nguoi 1 thang, =1 nguoi 2, =0 hoa, =2 thi tiep tuc
							//o day co doi nguoi choi _turn =!_turn
							switch (g.processFinish(x, y)) {
							case -1:		//nguoiwf 1 thắng
								//a.score1++;
								while (k)
								{
									if (_kbhit())
									{
										switch (_getch())
										{
										case 'y':			//xác nhận chơi lại play again
											PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
											load = 0;
											return PlayerVsPlayer(load, data, _pturn);
											break;
										case 27:
											PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
											system("cls");
											ScreenStartGame(n);
											break;
										}
									}
								}
								break;
							case 1:		//người 2 thắng
								//a.score2++;
								while (k)
								{
									if (_kbhit())
									{
										switch (_getch())
										{
										case 'y':
											PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
											load = 0;
											return PlayerVsPlayer(load, data, _pturn);
											break;
										case 27:
											PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
											system("cls");
											ScreenStartGame(n);
											break;
										}
									}
								}
								break;
							case 0:
								while (k)
								{
									if (_kbhit())
									{
										switch (_getch())
										{
										case 'y':
											PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
											load = 0;
											return PlayerVsPlayer(load, data, _pturn);
											break;
										case 27:
											PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
											system("cls");
											ScreenStartGame(n);
											break;
										}
									}
								}
								break;

							}
						}
					}
				}

			}

			//getturn = false O đánh chờ gửi dữ liệu
			else if (g.getTurn() == false)
			{
				_Common::AnTroChuot();
				char* rec = internet::listen();
				g.setX(createjson::intxOBj(rec));
				g.setY(createjson::intyOBj(rec));
				_Common::gotoXY(createjson::intxOBj(rec), createjson::intyOBj(rec));
				int xacnhan = createjson::intenterOBj(rec);
				if (xacnhan == 1)
				{
					int x = g.getXatEnter();
					int y = g.getYatEnter();
					if (g.processCheckBoard()) {
						//Kieemr tra nguoi thang, =-1 nguoi 1 thang, =1 nguoi 2, =0 hoa, =2 thi tiep tuc
						//o day co doi nguoi choi _turn =!_turn
						switch (g.processFinish(x, y)) {
						case -1:		//nguoiwf 1 thắng
							//a.score1++;
							while (k)
							{
								if (_kbhit())
								{
									switch (_getch())
									{
									case 'y':			//xác nhận chơi lại play again
										PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
										load = 0;
										return PlayerVsPlayer(load, data, _pturn);
										break;
									case 27:
										PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
										system("cls");
										ScreenStartGame(n);
										break;
									}
								}
							}
							break;
						case 1:		//người 2 thắng
							//a.score2++;
							while (k)
							{
								if (_kbhit())
								{
									switch (_getch())
									{
									case 'y':
										PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
										load = 0;
										return PlayerVsPlayer(load, data, _pturn);
										break;
									case 27:
										PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
										system("cls");
										ScreenStartGame(n);
										break;
									}
								}
							}
							break;
						case 0:
							while (k)
							{
								if (_kbhit())
								{
									switch (_getch())
									{
									case 'y':
										PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
										load = 0;
										return PlayerVsPlayer(load, data, _pturn);
										break;
									case 27:
										PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
										system("cls");
										ScreenStartGame(n);
										break;
									}
								}
							}
							break;

						}
						//				system("pause");
					}
				}

			}
		}
	}
	case 2:
	{
		int k = 1;
		int n = 99;
		//_Common::HienTroChuot();
		_Game g(BC_SIZE, 0, 0);
		g.setCountXY();
		if (load == -30)
		{
			g.setTurn();
			g.LoadGame(data);
		}
		else if (load == -31)
		{
			g.LoadGame(data);
		}
		else
			g.startGame();
		if (g.getTurn() == true)
		{
			g.setTurn();
		}
		PrintScoreBoard();
		_Common::Textcolor(BC_Cyan);
		_Common::gotoXY(BC_SIZE * 4 + 32, 24);
		cout << " PLAYER VS PLAYER ";
		_Common::Textcolor(BC_Blue);
		_Common::gotoXY(BC_SIZE * 4 + 30 + 18, 5);
		//cout << a.score1;
		_Common::Textcolor(BC_Red);
		_Common::gotoXY(BC_SIZE * 4 + 30 + 18, 15);
		//cout << a.score2;
		_Common::gotoXY(2, 1);
		while (g.isContinue())		// vào game tiếp tục return loop
		{
			//Kiểm tra nếu getturn ==1 thì cho X đánh trước chờ keyboard
			if (g.getTurn() == true)
			{
				_Common::HienTroChuot();
				g.waitKeyBoard();
				if (g.getCommand() == 27) {
					PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
					return 27;
				}

				else
				{
					switch (g.getCommand())
					{
					case 'A':
						PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
						g.moveLeft();
						break;
					case 'D':
						PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
						g.moveRight();
						break;
					case 'W':
						PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
						g.moveUp();
						break;
					case 'S':
						PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
						g.moveDown();
						break;
						/*
					case 'L':
						PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
						if (g.getTurn() == 1)
							g.SaveGame(-31);
						else
							g.SaveGame(-30);
						break;
					case 'T':
						PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
						LoadLoad();
						break;
						*/
					case 13:
						PlaySound(TEXT("tick.wav"), NULL, SND_FILENAME | SND_ASYNC);
						//lay gia tri x,y khi an Enter
						int x = g.getXatEnter();
						int y = g.getYatEnter();
						char* msg33 = createjson::json(x, y, 1);
						int check = internet::sendjson(msg33);
						while (check != 1)
						{
							if (g.processCheckBoard()) {
								//Kieemr tra nguoi thang, =-1 nguoi 1 thang, =1 nguoi 2, =0 hoa, =2 thi tiep tuc
								//o day co doi nguoi choi _turn =!_turn
								switch (g.processFinish(x, y)) {
								case -1:		//nguoiwf 1 thắng
									//a.score1++;
									while (k)
									{
										if (_kbhit())
										{
											switch (_getch())
											{
											case 'y':			//xác nhận chơi lại play again
												PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
												load = 0;
												return PlayerVsPlayer(load, data, _pturn);
												break;
											case 27:
												PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
												system("cls");
												ScreenStartGame(n);
												break;
											}
										}
									}
									break;
								case 1:		//người 2 thắng
									//a.score2++;
									while (k)
									{
										if (_kbhit())
										{
											switch (_getch())
											{
											case 'y':
												PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
												load = 0;
												return PlayerVsPlayer(load, data, _pturn);
												break;
											case 27:
												PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
												system("cls");
												ScreenStartGame(n);
												break;
											}
										}
									}
									break;
								case 0:
									while (k)
									{
										if (_kbhit())
										{
											switch (_getch())
											{
											case 'y':
												PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
												load = 0;
												return PlayerVsPlayer(load, data, _pturn);
												break;
											case 27:
												PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
												system("cls");
												ScreenStartGame(n);
												break;
											}
										}
									}
									break;

								}
								//rec = internet::listen();
							}
						}
						
					}
				}

			}

			//getturn = false O đánh chờ gửi dữ liệu
			else
			{
				_Common::AnTroChuot();
				char* rec = internet::listen();
				g.setY(createjson::intxOBj(rec));
				g.setX(createjson::intyOBj(rec));
				_Common::gotoXY(createjson::intxOBj(rec), createjson::intyOBj(rec));
				int xacnhan = createjson::intenterOBj(rec);
				while (xacnhan)
				{
					int x = g.getXatEnter();
					int y = g.getYatEnter();
					if (g.processCheckBoard()) {
						//Kieemr tra nguoi thang, =-1 nguoi 1 thang, =1 nguoi 2, =0 hoa, =2 thi tiep tuc
						//o day co doi nguoi choi _turn =!_turn
						switch (g.processFinish(x, y)) {
						case -1:		//nguoiwf 1 thắng
							//a.score1++;
							while (k)
							{
								if (_kbhit())
								{
									switch (_getch())
									{
									case 'y':			//xác nhận chơi lại play again
										PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
										load = 0;
										return PlayerVsPlayer(load, data, _pturn);
										break;
									case 27:
										PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
										system("cls");
										ScreenStartGame(n);
										break;
									}
								}
							}
							break;
						case 1:		//người 2 thắng
							//a.score2++;
							while (k)
							{
								if (_kbhit())
								{
									switch (_getch())
									{
									case 'y':
										PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
										load = 0;
										return PlayerVsPlayer(load, data, _pturn);
										break;
									case 27:
										PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
										system("cls");
										ScreenStartGame(n);
										break;
									}
								}
							}
							break;
						case 0:
							while (k)
							{
								if (_kbhit())
								{
									switch (_getch())
									{
									case 'y':
										PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
										load = 0;
										return PlayerVsPlayer(load, data, _pturn);
										break;
									case 27:
										PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
										system("cls");
										ScreenStartGame(n);
										break;
									}
								}
							}
							break;

						}
						//				system("pause");

					}
				}
			}
		}
	}
	}

	return 0;
}