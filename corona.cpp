#include<iostream>
using namespace std;
void corona(int roll,int person);

main()
{
    int roll = 0;
    int person =0;
    cout<<"Enter No of Persons : ";
    cin >> person;
    cout<<"Enter No Tissue Paper Rolls : ";
    cin >> roll;
    corona(roll,person);
}
void corona(int roll,int person)
{
    int days = 0;
    int requireTp = 0;
    days = (roll*500)/(person*57);
    requireTp = 14*person*57;
    if(requireTp <= days)
    {
        cout <<"No Need to Panic! Your tissue papers will last for " <<days <<" days";
    }
    else if(requireTp > days)
    {
        cout <<"Buy More! Your tissue papers will last for only " <<days <<" days";
    }

}