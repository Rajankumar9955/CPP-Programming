// brute force algorithm = all possible combination


// #include<iostream>
// #include<cstring>
// using namespace std;
// int main()
// {    
//     char s1[]="silent";
//     char s2[]="listen";
//     int c1=strlen(s1);
//     int c2=strlen(s2);
//     int c=0;
//     if(c1==c2)
//     {
//         for(int i=0; i<c1; ++i)
//         {
//             for(int j=0; j<c2; ++j)
//             {
//                 if(s1[i]==s2[j])
//                 {
//                     c++;
//                 }
//             }
//         }
//         if(c==c1)
//         {
//             cout<<"anagram";
//         }
//         else{
//             cout<<"not anagram";
//         }
//         }
//         else
//         {
//             cout<<" not anagram";
//         }
//     }




// WAP TO CHECK THE GIVEN STRING IS ANAGRAM OR NOT?
// INPUT    STR1=LISTEN  STR2=SILENT
// OUTPUT   YES 

#include<iostream>
#include<cstring>
using namespace std;
int main()
{   
    // char a,b;
    // cout<<"Enter the first word";
    // cin>>a;
    // cout<<"Enter the second word";
    // cin>>b;
    char size1[]="rav";
    char size2[]="ivra";
    int len1=strlen(size1);
    int len2=strlen(size2);
    int st[26] = {0};
    if(len1 != len2)
    {
        cout<<"Not anagram";
    }
    else
    {
        for(int i=0; i<len1; ++i)
        {
            st[size1[i]-'a']++;
        }
        for(int j=0; j<len2; ++j)
        {
            st[size2[j]-'a']--;
        }
        int b=0;
        for(int i=0;i<26; ++i)
        {
            if(st[i]!=0)
            {
                b++;
                break;
            }
        }
        if(b==0)
        {
            cout<<"Anagram";
        }
        else{
            cout<<"Not Anagram";
        }
    }
}