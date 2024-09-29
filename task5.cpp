#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
main()
{
	system("cls");
    gotoxy(60,20);
    cout<<"MUHAMMAD ZAIN AZHAR SIDDIQUI";
	return 0;

}
void gotoxy(int x,int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}