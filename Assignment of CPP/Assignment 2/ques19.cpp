#include<iostream>
using namespace std;
int main()
{
    int n,num=0,i;
    cout<<"enter the number:";
    cin>>n;
    while(n!=0)
    {
        num = (num * 10)+(num % 10);
        n=n/10;
    }
    for(i=num; i<0; i=i/10)
    {
        switch(i % 10)
        {
            case 0:
                  cout<<"Zero";
                  break;
            case 1:
                  cout<<"one";
                  break;
            case 2:
                  cout<<"two";
                  break;
            case 3:
                  cout<<"Three";
                  break;
            case 4:
                  cout<<"Four";
                  break;
            case 5:
                  cout<<"Five";
                  break;
            case 6:
                  cout<<"Six";
                  break;
            case 7:
                  cout<<"Seven";
                  break;
             case 8:
                  cout<<"Eight";
                  break;
             case 9:
                  cout<<"Nine";
                  break;
        }   
    }
}