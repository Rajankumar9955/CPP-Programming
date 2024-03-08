// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b=0,c;
//     cout<<"enter the number:";
//     cin>>a; //5
//     c=a-1;
//     while(a>=1)
//     {
//         if(a%c==0)
//         {
//             // cout<<"prime number:";
//             b++;
//         }
//         c--;
//     }
//     if(b==0)
//     {
//         cout<<"prime number:";
//     }
//     else
//     {
//         cout<<"Not prime";
//     }
// // }



// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b=0,c;
//     cout<<"enter any number:";
//     cin>>a;
//     c=a-1;
//     while(a>=1)
//     {
//         if(a%c==0)
//         {
//             b++;
//         }
//         c--;
//     }
//     if(b==0)
//     {
//         cout<<"prime number";
//     }
//     else{
//         cout<<"not prime number";
//     }
// }


#include<iostream>
using namespace std;
int main()
{
    int a,b=0,c;
    cout<<"enter any number:";
    cin>>a; //5
    c=a;
    while(a>=1)
    {
        if(a%c==0)
        {
            b++;
        }
        c--;
    }
    if(b==2)
    {
        cout<<"Prime number:";

    }
    else
    {
        cout<<"Not prime";
    }
}

