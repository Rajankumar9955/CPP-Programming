
#include<iostream>
using namespace std;
int main()
{
    int a[3][2] = {1,2,3,4,5,6};
    int tr[3][2] = {1,1,1,1,1,1};
    cout<<"sum of two array :"<<"\n";
    for(int r=0; r<3; ++r)
    {
        for( int c=0; c<2; ++c)
        {
         cout<<a[r][c]+tr[r][c]<<"\t";
        }
        cout<<"\n";
    }
}