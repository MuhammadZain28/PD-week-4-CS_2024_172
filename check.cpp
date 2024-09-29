#include<iostream>
using namespace std;
void check(int num1,int num2);

main()
{
	int num1=0;
	int num2=0;
	cout<<"Enter 1st number : ";
	cin >> num1;
	cout<<"Enter 2nd number : ";
	cin >> num2;
	check(num1,num2);
}
void check(int num1,int num2)
{
if(num1==num2)
	{
	cout<<"True";
	}
else
	{
	cout<<"False";
	}
}
