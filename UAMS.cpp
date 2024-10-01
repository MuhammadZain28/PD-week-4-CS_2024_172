#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x,int y);
void printMenu();
void calculateAggregate(string name, float matricMarks, float interMarks, float ecatMarks);
void compareMarks(string name1, float ecatMarks1, string name2, float ecatMarks2);

main()
    {
        printMenu();
            string name1,name2;
            float matricMarks=0, interMarks=0, ecatMarks1=0, ecatMarks2=0;
            cout << "Enter Student Name: ";
            cin >> name1;
            cout << "Enter Matric Marks (out of 1100): ";
            cin >> matricMarks;
            cout << "Enter Intermediate Marks (out of 550): ";
            cin >> interMarks;
            cout << "Enter ECAT Marks (out of 400): ";
            cin >> ecatMarks1;
            cout<<endl;

            calculateAggregate(name1, matricMarks, interMarks, ecatMarks1); 
            cout<<endl;
            
            cout << "Enter Student Name: ";
            cin >> name2;
            cout << "Enter Matric Marks (out of 1100): ";
            cin >> matricMarks;
            cout << "Enter Intermediate Marks (out of 550): ";
            cin >> interMarks;
            cout << "Enter ECAT Marks (out of 400): ";
            cin >> ecatMarks2;
            cout<<endl;
            
            calculateAggregate(name1, matricMarks, interMarks, ecatMarks1); 
            cout<<endl;
            
            compareMarks(name1, ecatMarks1, name2, ecatMarks2);
        
}
void printMenu() 
{
    system("cls");
    cout << "---------------------------------------------------" << endl;
    cout << "              University Admission System          " << endl;
    cout << "---------------------------------------------------" << endl;
    gotoxy(0,3);
    cout << "| 1. Calculate Aggregate |" << endl;
    gotoxy(26,3);
    cout << "| 2. Compare ECAT Marks |" << endl;
}
void calculateAggregate(string name, float matricMarks, float interMarks, float ecatMarks)
{
    float totalMatricMarks = 1100;
    float totalInterMarks = 550;
    float totalEcatMarks = 400;

    float matricWeightage = (matricMarks / totalMatricMarks) * 30;  
    float interWeightage = (interMarks / totalInterMarks) * 30;     
    float ecatWeightage = (ecatMarks / totalEcatMarks) * 40;        

    float aggregate = matricWeightage + interWeightage + ecatWeightage;

    cout << "Student: " << name << endl;
    cout << "Aggregate: " << aggregate << "%" << endl;
}
void compareMarks(string name1, float ecatMarks1, string name2, float ecatMarks2)
{
    cout << endl;
    if (ecatMarks1 >= ecatMarks2) 
    {
        cout <<""<<name1 << " has higher ECAT marks and gets the first roll number." << endl;
    }
    else if (ecatMarks2 > ecatMarks1) 
    {
        cout <<""<<name2 << " has higher ECAT marks and gets the first roll number." << endl;
    }
}
void gotoxy(int x,int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}