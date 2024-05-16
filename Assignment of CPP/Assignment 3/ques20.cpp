#include<iostream>
using namespace std;
int main()
{
    int arr[3][2]={1,2,3,4,5,6};
    int tr[2][3];
    cout<<"original\n";
    for(int r=0; r<3; ++r)
    {
        for(int c=0; c<2; ++c)
        {
            cout<<arr[r][c]<<"\t";
        }
        cout<<"\n";
    }
    cout<<"Transpose matrix:";
    for(int r=0; r<3; ++r)
    {
        for(int c=0; c<2; ++c)
        {
            tr[r][c] = arr[r][c];
        }
    }
    cout<<"\n";
    for(int r=0; r<3; ++r)
    {
        for(int c=0; c<2; ++c)
        {
            cout<<tr[r][c]<<"\t";
        }
        cout<<"\n";
    }
}

/*
output:-
original
1       2
3       4
5       6
Transpose matrix:
1       2
3       4
5       6
*/