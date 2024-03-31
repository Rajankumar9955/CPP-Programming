// #include<iostream>
// #include<cstring>
// using namespace std;
// int main()
// {
//     char str[]="all the best";
//     int l= strlen(str);
//     for(int i=0; i<l; ++i)
//     {
//         if(str[i]==' ')
//         {
//             continue;
//         }
//         else
//         {
//             cout<<str[i];
//         }
//     }

// }



// Storage the value 
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[]="all the best";
    int l=strlen(str);
    char str1[l];
    int j=0;
    for(int i=0; i<l; ++i)
    {
        if(str[i]!=' ')
        {
            str1[j]=str[i];
            j++;
        }
    }
    str1[j]='\0';
    cout<<str1;
}
