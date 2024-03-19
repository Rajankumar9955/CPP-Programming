#include<iostream>
#include<cstring>
using namespace std;
int main()
{


// char c[20]="Bhopal";
// char d[20]="cybrom";
// char s[20]="Hello";
char pwd1[20];
char pwd2[20];
// cout<<c;
// cout<<"enter name"<<"\n";
// cin>>c;
// // int s=0;
// cout<<strlen(c); //inbuilt function
// cout<<"length="<<s<<"/n";
// cout<<strupr(c)<<"\n";
// cout<<strlwr(c)<<"\n";
// cout<<strcat(c,d)<<"\n";
// cout<<c<<"\n";
// cout<<strcpy(c,s)<<"\n";
// cout<<c<<"\n";
// cout<<strrev(c);
cout<<"enter pwd"<<"\n";
cin>>pwd1;
cout<<"re-enter password\n";
cin>>pwd2;
if(stricmp(pwd1,pwd2)==0) // stricmp to ignore.. when the password is Rajan and repassword is rajan then doesnot give error
{
    cout<<"success";

}
else
{
    cout<<"Not matched";
}


}