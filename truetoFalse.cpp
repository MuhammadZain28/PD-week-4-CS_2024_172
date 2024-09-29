#include<iostream>
using namespace std;
void check(string a);

main()
{
	string input= "0";
	cout<<"Enter 'true' or 'false' : ";
	cin >>input;
	check(input);
}
void check(string a)
{
if(a=="true")
	{
	cout<<"false";
	}
if(a=="false")
	{
	cout<<"true";
	}
}

	