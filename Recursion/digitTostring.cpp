#include<iostream>
// #include<cstring>
using namespace std;
void dgt (int p,string s[])
{
    if(p==0)
    {
        return;

    }
int d=p%10;
p=p/10;
dgt(p,s);
cout<<s[d];
}
int main()
{
    int p;
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    cout<<"enter number\n";
    cin>>p;
    dgt[p,arr];
}