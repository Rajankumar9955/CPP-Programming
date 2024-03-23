#include<iostream>
// #include<cstring>
using namespace std;
void dgt(int p,string s[])
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
    string arr[10]={"zero\t","one\t","two\t","three\t","four\t","five\t","six\t","seven\t","eight\t","nine\t"};
    cout<<"enter number\n";
    cin>>p;
    dgt(p,arr);
}