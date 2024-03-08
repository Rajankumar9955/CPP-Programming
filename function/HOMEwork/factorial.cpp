#include<iostream>
using namespace std;
int   hariom (int h)
{
    int fact=1;
    for(int i=1; i<=h; i++)
    {
        fact=fact*i;
    }
  cout<<fact;
}
int main()
{
    int p;
    cout<<"enter the number:";
    cin>>p;
    if(p<=0){
        cout<<"invalid number";
    }
    else{
      cout<<hariom(p);
    }
    
}