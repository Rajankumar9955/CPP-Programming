#include<iostream>
using namespace std;
int main()
{
    int salary,gross,da,hra;
    cout<<"Enter the employee salary:";
    cin>>salary;
    if(salary<=10000)
    {
        da=salary*80/100;
        hra=salary*20/100;
        gross=salary+hra+da;
        cout<<"The gross salary of the employee:"<<gross<<"\n";
    }
    else if(salary<=20000)
    {
        da=salary*90/100;
        hra=salary*25/100;
        gross=salary+hra+da;
        cout<<"The gross salary of the employee:"<<gross<<"\n";

    }
    else if(salary<=20000)
    {
        da=salary*95/100;
        hra=salary*30/100;
        gross=salary+da+hra;
        cout<<"The gross salary of the employee:"<<gross<<"\n";
    }
}
/*
output:-
Enter the employee salary:20000
The gross salary of the employee:43000
*/