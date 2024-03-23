// WAP TO PRINT ARRAY OF TRANSPOSE 

// #include<iostream>                      
// using namespace std;
// int main()
// {
//     int a[3][2]={8,6,7,8,4,9};
//     int tr[2][3];
//     cout<<"original"<<"\n";
//     for( r=0; r<3; ++r)
//     {
//     for(int  c=0; c<2; ++c)
//     {
//      cout<<a[r][c]<<"\t";

//     }
//        cout<<"\n";
//     }
//     cout<<"Trannspose matrix are\n";
//     for(int r=0; r<3; ++r)
//     {
//         for(int c=0; c<2; ++c)
//     {
//         tr[c][r]=a[r][c];
//     } 
//     }
//     cout<<"\n";
//     for(int r=0; r<2; ++r)
//     {
//         for(int c=0; c<3; ++c)
//     {
//             cout<<tr[r][c]<<"\t";

//     }
//         cout<<"\n";
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int a[3][2]={1,2,3,4,5,6};
//     int tr[2][3];
//     cout<<"original    \n";
//     for(int r=0; r<3; ++r)
//     {
//         for(int c=0; c<3; ++c)
//         {
//             cout<<a[r][c];

//         }
//         cout<<"\n";

//     }
//     cout<<"Transpose matrix are\n";
//     for(int r=0; r<3; ++r)
//     {
//         for(int c=0; c<2; ++c)
//         {
//             tr[r][c]=a[c][r];
//         }
//     }
//     cout<<"\n";
//     for(int r=0; r<2; ++r)
//     {
//         for(int c=0; c<2; ++c){
//              cout<<tr[r][c]<<"\t";
//         }
//         cout<<"\n";
//     }
// }


#include<iostream>
using namespace std;
int main()
{
    int a[2][3]={1,2,3,4,5,6};
    int tr[3][2];
    cout<<"original \n";
    for(int r=0; r<2; ++r)
    {
        for(int c=0; c<3; ++c)
        {
            cout<<a[r][c];

        }
        cout<<"\n";

    }
    cout<<"Transpose matrix are\n";
    for(int r=0; r<2; ++r)
    {
        for(int c=0; c<3; ++c)
        {
            cout<<tr[r][c]=a[c][r];
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