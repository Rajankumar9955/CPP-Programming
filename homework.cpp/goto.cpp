#include<iostream>
using namespace std;
   int main()
{
    int n,a=1;
    cout<<"enter the value of any number: ";
    cin>>n;
    prnt:
    cout<<a*n<<"\n";
    a++;
    if(a<=10)
    {
    goto prnt;
    }

}