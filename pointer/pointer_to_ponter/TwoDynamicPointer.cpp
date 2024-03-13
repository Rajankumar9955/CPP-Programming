#include<iostream>
using namespace std;
// // same row and same column
// int main()
// {
//    int r;
//    cout<<"enter size of array\n";
//    cin>>n;
//    int **arr=new int*[r];
//    for (int i=0; i<n; ++i)
//    {
//     arr[i]=new int [r];
//    }
//    for(int i=0; i<r; ++i)
//    {
//      for(int j=0; j<r; ++j)
//      {
//         cin>>arr[i][j];
//      }
//    }
//    cout<<"output are\n";
//    for(int i=0; i<r; ++i)
//    {
//     for(int j=0; j<r; ++j)
//     {
//         cout<<arr[i][j]<<"\t";
//     }
//     cout<<"\n";
//    }
// }






int main()
{
    int r,c;
    cout<<"enter size of row"<<"\n";
    cin>>r;
    cout<<"enter size of column"<<"\n";
    cin>>c;
    int **arr=new int*[r];
    for(int i=0; i<r;++i)
    {
        arr[i]=new int [c];

    }
    for(int i=0; i<r; ++i)
    {
        for(int j=0; j<c; ++j)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"output are\n";
    for(int i=0; i<r; ++i)
    {
        for(int j=0;j<c; ++j)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<"\n";
        delete []arr;
        arr=NULL;
    }

}