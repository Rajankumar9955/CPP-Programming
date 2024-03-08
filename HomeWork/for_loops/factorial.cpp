#include<iostream>
using namespace std;
int main()
{
  int a,b=1;
  cout<<"enter any number:";
  cin>>a; //5
  for(int i=1; i<=a; i++)
  {
    b=b*i;

  }
  cout<<"factorial of that number:"<<b;



}