#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void maze();
main()
{
	system("cls");
	maze();
	gotoxy(15,5);
	cout<<"P";
	return 0;
}
void maze()
{
	cout<<"####################################"<<endl;
	cout<<"#                                  #"<<endl;
	cout<<"#                                  #"<<endl;
	cout<<"#                                  #"<<endl;
	cout<<"#                                  #"<<endl;
	cout<<"#                                  #"<<endl;
	cout<<"#                                  #"<<endl;
	cout<<"#                                  #"<<endl;
	cout<<"#                                  #"<<endl;
	cout<<"#                                  #"<<endl;
	cout<<"####################################"<<endl;
}

void gotoxy(int x,int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}