// WAP TO PRINT ARRAY OF TRANSPOSE
#include<iostream>
using namespace std;
int main()
{
    int b[2][3]={1,2,3,4,5,6};
    int tr[3][2];
    cout<<"original\n";
    for(int r=0; r<2; ++r)
    {
        for(int c=0; c<3; ++c)
        {
          cout<<b[r][c];
        }
        cout<<"\n";
    }
    cout<<"Transpose matrix are:";
    for(int r=0; r<2; ++r)
    {
        for(int c=0; c<3; ++c)
        {
            tr[r][c]=b[r][c];
        }
    }
    cout<<"\n";
    for(int r=0; r<3; ++r)
    {
        for(int c=0; c<2; ++c)
        {
            cout<<tr[r][c];
        }
        cout<<"\n";
    }
}