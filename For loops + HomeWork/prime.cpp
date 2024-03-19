#include<iostream>
using namepace std;
int main()
{
  int raj=9;
  int f=0;
  //cout<<"enter any number:";
  //cin>>raj;
  int s;
  s=raj-1;
while(s>=2)
{
if(raj%s==0)
{
  f++;
break;

}

}
if(f==0)
{

  cout<<"prime";
}
else
{cout<<"not prime";

}
}