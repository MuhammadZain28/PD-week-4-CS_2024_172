#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x,int y);
void printMenu();
void calculateAggregate(string name, float matricMarks, float interMarks, float ecatMarks);
void compareMarks(string nameStd1, float ecatMarksStd1, string nameStd2, float ecatMarksStd2);

main()
    {
    int choice=0;
    int i=0;
        printMenu();
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice == 1) 
            {
            string name;
            float matricMarks, interMarks, ecatMarks;
            
            cout << "Enter Student Name: ";
            cin >> name;
            cout << "Enter Matric Marks (out of 1100): ";
            cin >> matricMarks;
            cout << "Enter Intermediate Marks (out of 550): ";
            cin >> interMarks;
            cout << "Enter ECAT Marks (out of 400): ";
            cin >> ecatMarks;

            calculateAggregate(name, matricMarks, interMarks, ecatMarks);
        } 
        if (choice == 2) 
        {
            string nameStd1, nameStd2;
            float ecatMarksStd1, ecatMarksStd2;

            cout << "Enter Name of Student 1: ";
            cin >>  nameStd1;
            cout << "Enter ECAT Marks of Student 1 (out of 400): ";
            cin >> ecatMarksStd1;
            cout << "Enter Name of Student 2: ";
            cin >>  nameStd2;
            cout << "Enter ECAT Marks of Student 2 (out of 400): ";
            cin >> ecatMarksStd2;
            compareMarks(nameStd1, ecatMarksStd1, nameStd2, ecatMarksStd2);
        }
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
void compareMarks(string nameStd1, float ecatMarksStd1, string nameStd2, float ecatMarksStd2)
{
    cout << endl;
    if (ecatMarksStd1 >= ecatMarksStd2) 
    {
        cout <<""<<nameStd1 << " has higher ECAT marks and gets the first roll number." << endl;
    }
    else if (ecatMarksStd2 > ecatMarksStd1) 
    {
        cout <<""<<nameStd2 << " has higher ECAT marks and gets the first roll number." << endl;
    }
}
void gotoxy(int x,int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}