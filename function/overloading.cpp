// #include<iostream>
// using namespace std;
// void multi(int a)
// {
//     cout<<a*a<<"\n";
// }
// void multi(int a, int b)
// {
//     cout<<a*b;
// }
// int main()
// {     
// int k,n;
// cout<<"enter the first number:";
// cin>>k;
// cout<<"enter the second number:";
// cin>>n;
//     multi(k);
//     multi(k,n);
// }

#include<iostream>
using namespace std;
void override(int s)
{
    cout<<s*s<<"\n";
}
void override(int s, int a)
{
    cout<<s+a<<"\n";
}
int main()
{
    int s,a;
    cout<<"enter the first number:";
    cin>>s;
    cout<<"enter the second number:";
    cin>>a;
    override(s);
    override(s,a);
}