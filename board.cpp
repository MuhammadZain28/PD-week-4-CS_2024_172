#include<iostream>
using namespace std;
void board(int position1,int position2);

main()
{
	int yourPosition=0;
	int friPosition=0;
	cout<<"Enter your position on board : ";
	cin >>yourPosition;
	cout<<"Enter Friend's position on board : ";
	cin >>friPosition;
	board(yourPosition,friPosition);
}
void board(int position1,int position2)
{
	int dif=0;
	dif = position2-position1;
	if(dif<=6)
	{
	cout<<"True";
	}
	if(dif>6)
	{
	cout<<"False";
	}
}