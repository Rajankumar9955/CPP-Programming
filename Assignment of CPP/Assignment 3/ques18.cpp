#include<iostream>
using namespace std;
int main()
{
    int i,j,rows,columns,equal;
    cout<<"enter the row and column a equal matrix:";
    cin>>i>>j;
    int a[i][j],b[i][j];
    cout<<"\nenter the first matrix value:";
    for(rows=0; rows<i; ++rows)
    {
        for(columns=0; columns<i; ++columns)
        {
            cin>>a[rows][columns];
        }
    }
    cout<<"\nenter the second matrix value:";
    for(rows=0; rows<i; ++rows)
    {
        for(columns=0; columns<i; ++columns)
        {
            cin>>b[rows][columns];
        }
    }
    equal=1;
    for(rows =0; rows<i; ++rows)
    {
        for(columns=0;columns<j; ++columns)
        {
            if(a[rows][columns]!=b[rows][columns])
            {
                equal=0;
                break;
            }
        }
    }
    if(equal==1)
    {
        cout<<"\nmatrix a is equal to matrix b";
    }
    else
    {
        cout<<"\nmatrix a is not equal to matrix b";
    }
}

/*
output:-
enter the row and column a equal matrix:2
2

enter the first matrix value:1
2
3
4

enter the second matrix value:1
2
3
5

matrix a is not equal to matrix b 
*/