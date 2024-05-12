#include<iostream>
using namespace std;
int main()
{
    int a,rm,n;
    cout<<"enter the value for the notes:";
    cin>>a; //1388

    n=a/100;
    cout<<"notes of 100:"<<n<<"\n";
    rm=a-n*100;

    n=rm/50;
    cout<<"notes of 50:"<<n<<"\n";
    rm=a-n*50;
    
    n=rm/30;
    cout<<"notes of 30:"<<n<<"\n";
    rm=a-n*30;

    n=rm/20;
    cout<<"notes of 20:"<<n<<"\n";
    rm=a-n*20;

    n=rm/10;
    cout<<"notes of 10:"<<n<<"\n";
    rm=a-n*10;

    n=rm/5;
    cout<<"notes of 5:"<<n<<"\n";
    rm=a-n*5;

    n=rm/2;
    cout<<"notes of 2:"<<n<<"\n";
    rm=a-n*2;

    n=rm/1;
    cout<<"notrs of 1:"<<n<<"\n";
    rm=a-n*1;
}