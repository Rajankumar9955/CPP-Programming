#include<iostream>
using namespace std;
int main()
{
    int i,j,row,colum,sum;
    cout<<"enter the matrix rows and columns:";
    cin>>i>>j;
    int sumrcarray[i][j];
    cout<<"enter the matrix value\n";
    for(row=0; row<i; ++row)
    {
        for(colum=0; colum<j; ++colum)
        {
            cin>>sumrcarray[row][colum];
        }
    }
    for(row =0; row<i; ++row)
    {
        sum=0;
        for(colum=0; colum<j; ++colum)
        {
            sum=sum+sumrcarray[row][colum];
        }
        cout<<"\nsum of items in "<<row +1<<" rows of a matrix :"<<sum;
    }
    for(row=0; row<i; ++row)
    {
        sum=0;
        for(colum=0; colum<j; ++colum)
        {
            sum=sum+sumrcarray[colum][row];
        }
        cout<<"\nsum of value in column of a matrix: "<<sum;
    }
}

/*
output:-
enter the matrix rows and columns:3     
3
enter the matrix value
10
20
30
40
50
60
70
80
90

sum of items in 1 rows of a matrix :60
sum of items in 2 rows of a matrix :150 
sum of items in 3 rows of a matrix :240
sum of value in column of a matrix: 120 
sum of value in column of a matrix: 150 
sum of value in column of a matrix: 180
*/