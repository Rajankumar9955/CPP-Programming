#include<iostream>
using namespace std;
int main()
{
    int unit,topay=0;
    cout<<"enter the units:";
    cin>>unit;
    if(unit<50)
    {
        topay=unit*0.50;
        cout<<"total bills:"<<topay;
    }
    else if(unit<150)
    {
        topay=50 * 0.50 + ((unit-50)*0.75);
        cout<<"total bill:"<<topay;
    }
    else if(unit<250)
    {
        topay=50 * 0.25 + 100 * 0.75 + ((unit-)) ;
        cout<<"total bills:"<<topay;
    }
    else(unit>250)
    {
        topay=unit*1.50;
        cout<<"total bills:"<<topay;

    }

}