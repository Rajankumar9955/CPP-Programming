#include<iostream>
using namespace std;
int main(){
    int principle, intrest,month;
    cout<<"enter the principle amount: "<<endl;
    cin>>principle;
    cout<<"Enter the intrest rate: "<<endl;
    cin>>intrest;
    cout<<"enter the month: "<<endl;
    cin>>month;
    int simple_intrest = (principle * intrest * month)/100;
    cout<<"The actual amount with intrest(simple intrest) is: "<<simple_intrest;
    return 0;
}