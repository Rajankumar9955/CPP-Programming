/*it is use in banking for updation */

/*#include<iostream>
using namespace std;
class top
{
  int a;
  int *p;
  public:
  top()
  {
    a=0;
    p=new int;
    p=0;
  }
  top(top &obj) //own copy or deep copy 
  {
    a=obj.a;
    p=new int;
    *p=*(obj.p);
  }
  top(int x,int y)
  {
    a=x;
    p=&y;
  }
  void update() 
  {
    a=a+1;
    *p=*p+1;
  }
  void show()
  {
    cout<<"value of a="<<a<<"\n";
    cout<<"value of p="<<*p<<"\n";
  }
};
int main()
{
  int a,b;
  cout<<"Enter the first number:";
  cin>>a;
  cout<<"Enter the second number:";
  cin>>b;
  top t(a,b);
  t.show();
  top t1(t); //<-top t1=t;
  t1.update();
  t1.show();
  t.show();
}*/

#include<iostream>
using namespace std;
class raj
{
  int s;
  int *r;
  public:
  raj()
  {
    s=0;
    r=new int;
    r=0;
  }
  raj(raj &suraj)
  {
      s=suraj.s;
      *r=*(suraj.r);
  }
  raj(int x,int y)
  {
    s=x;
    r=&y;
  }
  void update()
  {
    s=s+1;
    *r=*r+1;
  }
  void show()
  {
    cout<<"value of s="<<s<<"\n";
    cout<<"value of r="<<*r<<"\n";
  }
};
int main()
{
  int a,b;
  cout<<"Enter the first number:";
  cin>>a;
  cout<<"Enter the second number:";
  cin>>b;
  raj j(a,b);
  j.show();
  raj j1(j);
  cout<<"After update\n";
  j1.update(); 
  j1.show();
  j.show();
}