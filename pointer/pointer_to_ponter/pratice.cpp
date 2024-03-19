// #include<iostream>
// using namespace std;
// int main()
// {
//     int r,c;
//     cout<<"enter the row\n";
//     cin>>r;
//     cout<<"enter the column\n";
//     cin>>c;
//     int **ptr=new int*[r];
//     for(int i=0; i<r; ++i)
//     {
//         ptr[i]=new int[r];
//     }
//     for(int i=0; i<r; ++i)
//     {
//         for(int j=0; j<c; ++j)
//         {
//             cin>>ptr[i][j];
//         }
//     }
//     cout<<"output are\n";
//     for(int i=0; i<r; ++i)
//     {
//         for(int j=0; j<c; ++j)
//         {
//             cout<<ptr[i][j]<<"\t";
//         }
//         cout<<"\n";
//         delete []ptr;
//         ptr=NULL;
//     }
// }

#include<iostream>
using namespace std;
int main()
{
    int r;
    cout<<"enter size of array\n";
    cin>>r;
    int **arr=new int*[r];
    for(int i=0; i<r; ++i)
    {
        arr[i]=new int[r];

    }
    for(int i=0; i<r; ++i)
    {
        for(int j=0; j<r; ++j)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"output are\n";
    for(int i=0; i<r; ++i)
    {
        for(int j=0; j<r; ++j)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<"\n";
        delete[]arr;
        arr=NULL;
    }
}