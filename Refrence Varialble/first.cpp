#include<iostream>
using namespace std;
int main()
{
    int i=10;
    cout<<"address of i="<<&i<<"\n";
    cout<<"valur of i="<<i<<"\n";
    int &j=i;
    cout<<"address of j="<<&j<<"\n";
    cout<<"value of j="<<j<<"\n";
    j++;
    cout<<"valur of i="<<i<<"\n";
    int &k=i;
    cout<<"address of k="<<&k<<"\n";
    cout<<"valur of k="<<k<<"\n";
}