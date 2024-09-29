#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void maze();
void playerMove(int a,int b);
main()
{
	int x=4;
	int y=4;
	system("cls");
	maze();
	while (true)
	{
		playerMove(x,y);
		x = x+1;
		if (x==25)
		{
			x=4;
		}
		
	}
	
	return 0;

}
void playerMove(int x,int y)
{
	gotoxy(x,y);
	cout<<"P";
	Sleep(200);
	gotoxy(x,y);
	cout<<" ";
	return;
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