// #include<iostream>
// #include<cstring>
// // #include<cmath>
// using namespace std;
// int main()
// {
//     char c1[20];
//     int s;
//     cout<<"enter word\n";
//     cin>>c1;
//     s=strlen(c1);
//     int p=0;
//     char t;
//     for(int i=0; i<s; ++i)
//     {
//          int c=0;
//          for(int j=0; j<s; ++j)
//          {
//             if(c1[i]==c1[j])
//             {
//                 c++;
//             }
//          }
//          if(c>p)
//          {
//             p=c;
//             t=c1[i];
//          }
//     }
//     cout<<"character="<<t<<"\n";
//     cout<<"times="<<p;
// }


#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char c1[20];
    int s;
    cout<<"enter the word:";
    cin>>c1;
    s=strlen(c1);
    int p=0;
    char t;
    for(int i=0; i<s; ++i)
    {    
        int c=0;
        for(int j=0; j<s; ++j)
        {
            if(c1[i]==c1[j])
            {
              c++;
            }

        }
        if(c>p)
        {
            p=c;
            t=c1[i];
        }
    }
    cout<<"character="<<t<<"\n";
    cout<<"Times="<<p;
}