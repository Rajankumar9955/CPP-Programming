// #include<iostream>
// using namespace std;
// void swap(int s,int e)
// {
//     int temp;
//     temp=s;
//     s=e;
//     e=temp;
//     cout<<"e="<<e<<"\t";
//     cout<<"s"<<s<<"\t";
// }
// int main()
// {
//     int s,e;
//     cout<<"enter first number:";
//     cin>>s;
//     cout<<"enter second number:";
//     cin>>e;
//     swap(s,e);    
//     cout<<"S"<<"="<<s<<";"<<"\n";
//     cout<<"E"<<"="<<e<<";"<<"\n";
// }

#include<iostream>
using namespace std;
void swp(int s,int e)
{
    int temp;
    temp=s;
    s=e;
    e=temp;
    cout<<"s="<<s<<"\n";
    cout<<"e="<<e<<"\n";
}

int main()
{
    int s,e;
    cout<<"enter the start number:";
    cin>>s;
    cout<<"enter the second number:";
    cin>>e;
    swp(s,e);
}


