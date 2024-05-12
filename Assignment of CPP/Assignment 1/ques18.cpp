#include<iostream>
using namespace std;
int main()
{
    int phy,chem,bio,math,comp;
    cout<<"Enter the physics marks:";
    cin>>phy;
    cout<<"Enter the chemistry marks:";
    cin>>chem;
    cout<<"Enter the biology marks:";
    cin>>bio;
    cout<<"enter the maths marks:";
    cin>>math;
    cout<<"enter the computer marks:";
    cin>>comp;
    int per=(phy+chem+bio+math+comp)/5;
    cout<<"Percentage of marks:"<<per<<"%";
    if(per>90 && per<100)
    {
        cout<<":grade A";
    }
    else if(per>80 && per<89)
    {
        cout<<":grade B";
    }
    else if(per>70 && per<79)
    {
        cout<<":grade C";
    }
    else if(per>60 && per<69)
    {
        cout<<":grade D";
    }
    else if(per>40 && per<59)
    {
        cout<<":grade E";
    }
    else
    {
        cout<<":grade F";
    }

}

/*
output:-
Enter the physics marks:64
Enter the chemistry marks:63
Enter the biology marks:52
enter the maths marks:38
enter the computer marks:67
Percentage of marks:56%:grade E
*/