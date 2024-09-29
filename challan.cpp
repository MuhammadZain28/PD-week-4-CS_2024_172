#include<iostream>
using namespace std;
void challan(float speed);

main()
{
	float speed =0;
	cout<<"Enter Speed of Car : ";
	cin >>speed;
	challan(speed);

}

void challan(float speed)
{
if(speed>100)
	{
	cout<<"Halt... YOU WILL BE CHALLENGED!!!";
	}
if(speed<=100)
	{
	cout<<"Perfect! You’re going good.";
	}
}