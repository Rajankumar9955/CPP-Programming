#include<iostream>
using namespace std;
int main()
{
    int matOne[3][3],matTwo[3][3],matSub[3][3],i,j;
    cout<<"Enter 9 elements for first martrix :";
    for(i=0; i<3; ++i)
    {
        for(j=0; j<3; ++j)
        {
            cin>>matOne[i][j];
        }
    }
    cout<<"Enter 9 Elements for second matrix:";
    for(i=0; i<3; ++i)
    {
        for(j=0; j<3; ++j)
        {
            cin>>matTwo[i][j];
        }
    }
    for(i=0;i<3; ++i)
    {
        for(j=0; j<3; ++j)
        {
            matSub[i][j]=matOne[i][j]-matTwo[i][j];
        }
    }
    cout<<"\nThe New matrix (substraction result) is :\n";
    for(i=0; i<3; ++i)
    {
        for(j=0; j<3; ++j)
        {
            cout<<matSub[i][j]<<" ";
        }
        cout<<"\n";
    }
}

/*
output:-
Enter 9 elements for first martrix :9
8
7
6
5
4
3
2
1
Enter 9 Elements for second matrix:8
7
6
5
4
3
2
1
0

The New matrix (substraction result) is :
1 1 1
1 1 1
1 1 1*/