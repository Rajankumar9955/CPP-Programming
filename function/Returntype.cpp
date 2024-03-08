/*#include<iostream>
using namespace std;
int sqr(){  //Return && without parameter
    int a=9;
    return a*a;
}
int sum(int a,int b)     //Return && with parameter
{
  return a+b;  
}
int main()
{
    cout<<sqr()+1<<"\n";
    int p;
    p=sum(5,7);
    cout<<p;
}*/


#include<iostream>
using namespace std;
int  mp(int ltr)
{
  return 108*ltr;
}
int  mh(int ltr)
{
  return 90*ltr;
}

int main()
{  
  int p,q;
  p=mp(45);
  q=mh(5);
  cout<<p+20*(45)<<"\n";
  cout<<q;
}








