/*it is use in banking for updation */

#include<iostream>
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
}