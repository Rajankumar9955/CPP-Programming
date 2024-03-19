#include<iostream>
using namespace std;
int pwr (int b,int p)
{
    if(b==0)
    {
        return 0;
    }
    if(p==0)
    {
        return 1;
    }
    int k=b*pwr(b,p-1);
    return k;
}
int main()
{
    int b,p;
    cout<<"enter base \n";
    cin>>b;
    cout<<"enter power\n";
    cin>>p;
    cout<<pwr(b,p);
}