// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[2][2][3]={1,2,3,4,5,6,7,8,9,10,11,12};
//     cout<<"original\n";
//     for(int t=0; t<2; ++t)
//     {
//         for(int r=0; r<2; ++r)
//         {
//             for(int c=0; c<3; ++c)
//             {
//                 cout<<a[t][r][c];
//             }
//             cout<<"\n";

//         }
//            cout<<"\n";
//     }
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int array[3][2][2]={1,2,3,4,5,6,7,8,9,12,44,56};
//     cout<<"originals array is\n";
//     for(int t=0; t<2; ++t){
//         for(int r=0; r<2; ++r)
//         {
//             for(int c=0; c<3; ++c){
//                 cout<<array[t][r][c]<<"\n";
//             }  
//         }
//         cout<<"\n";
//     }
// }

#include<iostream>
using namespace std ;
int main()
{
    int array[3][2][2]= {12,42,45,75,53,65,23,75,65,32,42,12};
    cout<<"original array is \n";
    for(int t=0; t<2; ++t)
    {
        for(int r=0; r<2; ++r)
        {
            for(int c=0; c<3; ++c)
            {
                cout<<array[t][r][c];

            }
        }
        cout<<"\n";
    }
}