#include<iostream>
using namespace std;
int main()
{
    int a,b,c; 
    cout<<"enter the three number:";
    cin>>a>>b>>c; //a=10; b=11; c=12;
   if(a>=b && a>=c)
   {
    cout<<a<<"\n";
   }
   else if(b>=a && b>=c)
   {
    cout<<b;
   }
   else
   {
    cout<<c;
   }

}
/*
cout:= 
enter the three number:10
11
12
12

*/