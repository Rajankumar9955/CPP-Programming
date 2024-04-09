#include<iostream>
using namespace std;
main()
{
    int n;
    cout<<"enter last value\n";
    cin>>n;
    do
    {
        if(n%2==0)
        {
        cout<<n<<"\n";
        }
        n--;
        
    }while(n>=1);
}