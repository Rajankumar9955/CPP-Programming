// #include<iostream>
// using namespace std;
// void table(int r)
// {
    
//     for(int i=1; i<=10; i++)
//     {
//         cout<<"\n"<<r<<"*"<<i<<"="<<r*i;
//     }
// }

// int main()
// {
//    int p;
//    cout<<"enter any number:";
//    cin>>p;
//    table(p);
// }

#include<iostream>
using namespace std;
void table(int t)
{
    for(int i=1;i<=10;i++)
    {
        cout<<"\n"<<t<<"*"<<i<<"="<<t*i;
    }
}
int main()
{
    int a;
    cout<<"enter any number:";
    cin>>a;
    table(a);
}