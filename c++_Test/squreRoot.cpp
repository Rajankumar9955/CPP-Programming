// #include<iostream>
// using namespace std;
// int main()
// {
//     int squre;
//     cout<<"enter number\n:";
//     cin>>squre; //64
//     for(int i=1; i<squre; i++)
//     {
//         if(i*i==squre)
//         {
//             cout<<"square root is: "<<squre;
//             break;
//         }

//     }
//     }



// #include<iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cout<<"enter any number:";
//     cin>>a;
//     for(int i=1; i<a; i++)
//     {
//         if(i*i==a)
//         {
//             cout<<"square root is "<<i;
//             break;
//         }
//         // else{
//         // cout<<"This is not squre root number";
//         // break;
//         // }
//     }
// }

#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter any number:";
    cin>>a;
    for(int i=1; i<a; i++)
    {
        if(i*i==a)
        {
            cout<<"squre root of:"<<i;
             break;
        }
       
    }
}