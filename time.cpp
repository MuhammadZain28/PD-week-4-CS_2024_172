#include<iostream>
using namespace std;
void time(int hours,int min);

main()
{
	int hour = 0;
	int min =0;
	cout<<"Enter Hours : ";
	cin >> hour;
	cout<<"Enter Minutes : ";
	cin >> min;
	time(hour,min);
}
void time(int hours,int min)
{
 if((60*hours)>=min)
	{
	cout<<""<<hours<<endl;
	}
 if((60*hours)<min)
	{
	cout<<""<<min<<endl;
	}
}