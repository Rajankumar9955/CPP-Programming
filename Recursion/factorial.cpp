// #include<iostream>
// using namespace std;
// int  fact(int n)
// {
//  if(n==0 || n==1)
//  {
//     return n;
//  }
//   int t=n*fact(n-1);
//   return t;
// }
// int main()
// {
//     int n;
//     cout<<"enter any number:";
//     cin>>n;
//     cout<<"factorial="<<fact(n);
// }

#include<iostream>
using namespace std;
int fact(int n)
{
  if(n==0 || n==1)
  {
    return n;
  }
  int r=n*fact(n-1);
  return r;
}
int main()
{
  int n;
  cout<<"enter the numbr:";
  cin>>n;
  cout<<"factorial="<<fact(n);
}