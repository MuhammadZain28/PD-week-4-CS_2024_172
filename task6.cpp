#include<iostream>
#include<windows.h>
using namespace std;
void H(int x,int y);
void A(int x,int y);
void S(int x,int y);
void N(int x,int y);
void gotoxy(int x,int y);
main()
{
	system("cls");
    H(0,0);
    A(0,1);
    S(0,2);
    S(0,3);
    A(0,4);
    N(0,5);
	return 0;

}
void H(int x,int y)
{
    gotoxy(x,y);
    cout<<"H";
}
void A(int x,int y)
{
    gotoxy(x,y);
    cout<<"A";
}
void S(int x,int y)
{
    gotoxy(x,y);
    cout<<"S";
}
void N(int x,int y)
{
    gotoxy(x,y);
    cout<<"N";
}
void gotoxy(int x,int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}