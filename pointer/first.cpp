#include<iostream>
using namespace std;
int main()
{
    // int i=10;
    // cout<<"i"<<","<<&i<<","<<sizeof(i)<<"\n";
    // char *p;
    // cout<<p<<","<<&p<<","<<sizeof(p);



    int i=90;
    int *p=&i;
    cout<<"address of i="<<&i<<"\n";
    cout<<"address of p="<<p<<"\n";
    cout<<"value of i="<<*p<<"\n";

}