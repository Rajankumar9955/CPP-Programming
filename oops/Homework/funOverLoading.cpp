// #include<iostream>
// using namespace std;
// class raj
// {   
//     int r;
//     public:void sqr(int a)
//     {
//       r=a*a;
//     }
//     void sqr()
//     {
//         cout<<"squre="<<r;
//     }
// };
// int main()
// {
//    raj r;
//    int s;
//    cout<<"enter the number:";
//    cin>>s;
//    r.sqr(s);
//    cout<<"\n";
//    r.sqr();
// }

#include<iostream>
using namespace std;
class raj
{
  int r;
  public:void show(int a)
  {
    r=a*a*a;
  }
  void show()
  {
    cout<<"cube="<<r;
  }
};
int main()
{
  raj s;
  int b;
  cout<<"Enter the number please=";
  cin>>b;
  s.show(b);
  s.show();
}