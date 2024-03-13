// In a symbol table mapping of pointer is stored
#include<iostream>
using namespace std;
int main()
{
    int arr [5]={12,42,35,65,23};
    cout<<"value of 0 location="<<0[arr]<<endl;
    cout<<"similarly value of 0 location="<<arr[0]<<endl;
    cout<<"similarly value of 0 location="<<*(0+arr)<<endl;
    cout<<arr<<"\n";
    cout<<&arr<<"\n";

    // arr=arr+1; //error bcz we can not make any change of symbol loction table
    
   int *p=&arr[0];
   cout<<"value of 0 location="<<*p<<endl;
   p=p+1;
   cout<<"value of 1 location="<<*p<<endl;
   cout<<"address of arr="<<&arr<<endl;
   cout<<"address of p="<<&p<<endl;
   cout<<p<<endl; //address of 0 location
   p=p+1;
   cout<<p<<endl;//address of 1 location

char *c;
float *k;
double *d;
char g;
cout<<"size of g="<<sizeof(g)<<endl;
cout<<"pointer take 8 byte address of g="<<sizeof(&g)<<endl;
cout<<"value of array name *c="<<sizeof(c)<<endl;
cout<<"value of array name c="<<sizeof(*c)<<endl;
cout<<"pointer take 8 byte address of c="<<sizeof(&c)<<endl;
cout<<"ponter take 8 byte address of k="<<sizeof(&k)<<endl;
cout<<"pointer take 8 byte address of d="<<sizeof(&d)<<endl;
cout<<"value of array name c ="<<sizeof(&arr)<<endl;
cout<<"value of 0 location="<<*arr<<endl;
cout<<"updated value of 0 location="<<*arr+100<<endl;
cout<<"value of 1 location="<<*(arr+1)<<endl;
cout<<"updated value of 1 location="<<*(arr+1)+1000<<endl;
cout<<"value of 2 location="<<*(arr+1)<<endl;
}