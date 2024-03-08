// #include<iostream>
// using namespace std;
// void even(int s,int e)
// {
//     for(s; s<=e; ++s)
//     {
//         if(s%2==0)
//         {
//             cout<<s;
//             if(s<e-1)
//             {
//                 cout<<",";
//             }

//         }
//     }
// }
// int main()
// {
//     int a,b;
//     cout<<"Enter start point:";
//     cin>>a;
//     cout<<"Enter end point: ";
//     cin>>b;
//     even(a,b);
// }

#include<iostream>
using namespace std;
void Range(int s, int e)
{
    for(s; s<e; s++)
    {
        if(s%2==0)
        {
            cout<<s;
            if(s<e-1)
            {
                cout<<",";
            }
        }
    }
}
int main()
{
    int start,end;
    cout<<"enter starting point:";
    cin>>start;
    cout<<"enter end point:";
    cin>>end;
    Range(start,end);
}