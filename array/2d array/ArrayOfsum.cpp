// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[3][3]={12,52,65,35,65,86,54,23,65,};
//     int sum=0;
//     for(int r=0;r<=2; ++r)
//     {
//         for(int c=0; c<=2; ++c)
//         {
//             sum=sum+a[r][c];
//         }
//     }
//     cout<<"sum: "<<sum;
// }



// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[3][2][2]={10,12,10,12,14,18,19,24,51,32,10,27};
//     int sum=0;
//     for( int t=0; t<=3; ++t)
//     {
//         for(int r=0;r<=3; ++r)
//         {
//             for( int c=0; c<=3; ++c)
//             {
//                 sum=sum+a[t][r][c];
//             }
//         }
//     }
//     cout<<"sum="<<sum;
// }

#include<iostream>
using namespace std;
int main()
{
    int a[3][2][2]={10,12,42,51,42,51,35,65,7,5,56,75};
    int sum;
    for(int t=0; t<=3; ++t)
    {
        for(int r=0; r<=3; ++r)
        {
            for(int c=0; c<=3; ++c)
            {
                sum=sum+a[t][r][c];
            }
        }
    }
    cout<<"sum="<<sum;
}
