#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    /*char c[30]="Rajan kumar";
    char d[20];
    cout<<"enter name\n";
    cin>>d;
    cout<<strlen(d)<<"\n";
    cout<<strlen(c)<<"\n"; */


    
    char d[20];
    cout<<"enter name \n";
    cin>>d;
    int s=0;
    cout<<strlen(d)<<"\n";//inbuilt function
    for(int i=0; d[i]!='\0'; ++i)
    {
        s++;
    }
    cout<<"length="<<s;

}