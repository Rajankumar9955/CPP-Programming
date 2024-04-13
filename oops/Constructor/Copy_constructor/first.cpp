// #include<iostream>
// using namespace std;
// class top
// {
//     int a,b;
//     public:top(int a,int b)
//     {
//        this->a=a;
//         this->b=b;
//     }
//     void show()
//     {
//         cout<<"value of a="<<a<<"\n";
//         cout<<"value of b="<<b<<"\n";
//  }
// };
// int main()
//     {
//       top t(2,3);
//       t.show();
//     }



#include<iostream>
using namespace std;
class top
{
  int a,b;
  public:top(int a,int b)
  {
    this->a=a;
    this->b=b;
  }
  void show()
  {
    cout<<"value of a="<<a<<"\n";
    cout<<"value of b="<<b<<"\n";
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
}