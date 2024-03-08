// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b,temp;
//     cout<<"enter the first number:";
//     cin>>a;
//     cout<<"enter the second number:";
//     cin>>b;

//     temp=a;
//     a=b;
//     b=temp;
//     cout<<"after swapping"<<a<<b;
// }


#include<iostream>
using namespace std;
int main()
{
    int phy,chem,maths;
    cout<<"enter physics marks:";
    cin>>phy;
    cout<<"Enter chemestry marks:";
    cin>>chem;
    cout<<"Enter mathematics marks:";
    cin>>maths;
    int total=phy+chem+maths;
    cout<<"total marks:"<<total<<"\n";
    int per =(phy+chem+maths)/3;
    cout<<"Percentage of all subject is:"<<per<<"%"<<"\n";
    if(per<35){
        cout<<"fail"<<"\n";
    }
    else if(per>35 && per<49)
    {
        cout<<"third divisions"<<"\n";
        

    }
    else if(per>49 && per<59)
    {
        cout<<"second division:"<<"\n";
    
    }
    else if(per>59 && per<100)
    {
        cout<<"first division:"<<"\n";
    }
}

