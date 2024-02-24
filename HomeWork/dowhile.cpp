#include<iostream>
using namespace std;
int main()
{
 int a,r,b=0;
 cout<<"Enter any number: ";
 cin>>a; 
 
 
       while(a!=0)
       {
        r=a%10;
        b=b*10+r;
        a=a/10;

       }
       cout<<b;
 }




// This is prime number and not prime number

  // int a,c=0,k;
  // cout<<"enter any no\n";
  // cin>>a;
  // k=a;
  // while(k>=1)
  // {
  //   if(a%k==0)
  //   {
  //     c++;
  //   }
  //     k--;
  // }
  // if(c==2)
  // {
  //   cout<<"prime no";
  // }
  // else
  // {
  //   cout<<"not prime";
  // }
/*int main()
{
  int a=10;
  while(a>2)
  {
    cout<<a;
    a--;
  }
  cout<<"done";
}*/
 /* int b,p,c;
  cout<<"enter base\n";
  cin>>b;
  cout<<"enter power\n";
  cin>>p;
c=1;
  while(p>=1)
  {
    c=c*b;
    p--;
  }
  cout<<"output="<<c;
}*/
/*int main()
{
  int a,b=0;
  cout<<"Enter the any number: \n";
  cin>>a;
  do
  {
    b=a+b;
    a--;
  }while(a>=1);
  cout<<"sum="<<b;
}*/