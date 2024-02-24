#include<iostream>
using namespace std;
int main()
{
    int a[3][3]={2,5,6,7,10,54,20,2,6};
    int squre=0;
    for(int r=0; r<=2; ++r)
    {
        for(int c=0; c<=2; ++c)
        {
            cout<<a[r][c]*a[r][c]<<"\t";
        }
        cout<<"\n";
    }
}
 