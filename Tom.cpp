#include<iostream>
using namespace std;
int pet(int holidays);

main()
{
    int holidays=0;
    cout <<"Holidays : ";
    cin >> holidays;
    pet(holidays);
}
int pet(int holidays)
{
    int playTime = 0;
    int time = 0;
    int workDay = 0;
    int norm = 30000;
    int hour = 0;
    int min  = 0;
    workDay = (365-holidays);
    playTime = workDay*63 + holidays*127;
    if(playTime <= norm)
    {       time = norm - playTime;
            hour = time/60;
            min  = time-(hour*60);
            cout << "Tom sleeps well." <<endl;
            cout <<""<<hour <<" Hours" <<" " <<min << " mins for play.";
    }
    if(playTime > norm)
    {       time = playTime - norm;
            hour = time/60;
            min  = time-(hour*60);
            cout << "Tom will run away." <<endl;
            cout <<""<<hour <<" Hours" <<" " <<min << " mins for play.";
    }
}