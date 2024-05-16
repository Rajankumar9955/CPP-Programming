#include<iostream>
using namespace std;
int main()
{
    int row,col,m1[10][10],m2[10][10],sum[10][10];
    cout<<"enter the number of rows (should be >1 and <10):";
    cin>>row;
    cout<<"enter the number of column(should be >1 and <10):";
    cin>>col;
    cout<<"enter the elements of first 1st matrix:";
    for(int i=0; i<row; ++i)
    {
        for(int j=0; j<col; j++)
        {
            cin>>m1[i][j];
        }
    }
    cout<<"enter the elements of first 2nd matrix:";
    for(int i=0; i<row; ++i)
    {
        for(int j=0; j<col; ++j)
        {
            cin>>m2[i][j];
        }
    }
    cout<<"output:";
    for(int i=0; i<row; ++i)
    {
        for(int j=0; j<col; ++j)
        {
            sum[i][j]=m1[i][j]+m2[i][j];
            cout<<sum[i][j]<<" ";
        }
    }
}

/*
output:-
enter the number of rows (should be >1 and <10):2
enter the number of column(should be >1 and <10):3
enter the elements of first 1st matrix:1
2
3
4
5
6
enter the elements of first 2nd matrix:5
5
5
5
5
5
output:6 7 8 9 10 11
*/