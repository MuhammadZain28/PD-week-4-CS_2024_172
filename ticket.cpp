#include<iostream>
using namespace std;
void pak(int ticket);
void ind(int ticket);
void ire(int ticket);
void eng(int ticket);
void can(int ticket);

main()
{
while(true)
	{
	int ticket = 0;
	string country="0";
	cout<<"Enter Country's name : ";
	cin >> country;
	cout<<"Enter ticket Price : $";
	cin>>ticket;
	if(country == "Pakistan")
	{
		pak(ticket);
	}
	if(country == "India")
	{
		ind(ticket);
	}
	if(country == "Ireland")
	{
		ire(ticket);
	}
	if(country == "England")
	{
		eng(ticket);
	}
	if(country == "Canada")
	{
		can(ticket);
	}
	}
}


void pak(int ticket)
{
	int discount =0;
	int discountedPrice=0;
	discount = int(ticket)*(5.0/100);
	discountedPrice= int(ticket)-int(discount);
	cout<<"Discounted Price : "<<discountedPrice;
}
void ind(int ticket)
{
	int discount =0;
	int discountedPrice=0;
	discount = int(ticket)*(20.0/100);
	discountedPrice= int(ticket)-int(discount);
	cout<<"Discounted Price : "<<discountedPrice;
}
void ire(int ticket)
{
	int discount =0;
	int discountedPrice=0;
	discount = int(ticket)*(10.0/100);
	discountedPrice= int(ticket)-int(discount);
	cout<<"Discounted Price : "<<discountedPrice;
}
void eng(int ticket)
{
	int discount =0;
	int discountedPrice=0;
	discount = int(ticket)*(30.0/100);
	discountedPrice= int(ticket)-int(discount);
	cout<<"Discounted Price : "<<discountedPrice;
}
void can(int ticket)
{
	int discount =0;
	int discountedPrice=0;
	discount = int(ticket)*(45.0/100);
	discountedPrice= int(ticket)-int(discount);
	cout<<"Discounted Price : "<<discountedPrice;
}