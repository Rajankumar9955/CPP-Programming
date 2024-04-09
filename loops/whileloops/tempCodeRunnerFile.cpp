
#include<iostream>
using namespace std;
int main()
{
  int a,b,result=1;
  cout<<"enter the first number";
  cin>>a; //5
  cout<<"enter the second number:";
  cin>>b; //5
  while(b>=1)
  {
    result=result*a;
    b--;

  }
  cout<<result;
}
