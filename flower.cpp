#include<iostream>
using namespace std;
float flowerShop(int redRose,int whiteRose,int tulip);

main()
{
	int red=0;
	int white=0;
	int tulip=0;
	cout<<"Enter no. of white flowers : ";
	cin >>white;
	cout<<"Enter no. of Red flowers : ";
	cin >>red;
	cout<<"Enter no. of Tulips : ";
	cin >>tulip;
	cout<< "Total price : " <<flowerShop(red,white,tulip);
	return 0;
}
float flowerShop(int redRose,int whiteRose,int tulip)
{
	float price=0;
	float discountedPrice=0;
	price = float(redRose*2.00)+float(whiteRose*4.10)+float(tulip*2.50); 
	if(price >= 200)
	{
	discountedPrice = float(price)-float(price*20.0/100);
	return discountedPrice;
	}
	if(price < 200)
	{
	return price;
	}	
}