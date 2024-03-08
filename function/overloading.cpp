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
void overRide(int a)
{
    cout<<a*a<<"\n";
}
void overRide(int a,int b)
{
    cout<<a+b;
}
int main()
{
    int Raj,Rajan;
    cout<<"enter the first number:";
    cin>>Raj;
    cout<<"enter the second number:";
    cin>>Rajan;
    overRide(Raj);
    overRide(Raj,Rajan);
}