// Decimal to binary

// #include<iostream>
// #include<math.h>
// using namespace std;
// int main()
// {
//    int n;
//    int bit;
//    int ans=0;
//    int i=0;
//    cout<<"Enter any number:\n";
//    cin>>n;
//    while(n!=0)
//    {
//      bit=n&1;
//      ans=bit*pow(10,i)+ans;
//      n=n>>1;
//      i++;
//    }
//    cout<<ans;

// }

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int n;
  int bit;
  int ans=0;
  int i=0;
  cout<<"Enter the decimal number:";
  cin>>n;
  while(n!=0)
  {
    bit=n%10;
    if(bit==1)
    {
      ans=bit*pow(2,i)+ans;
    }
    n=n/10;
    i++;
  }
  cout<<ans;
}