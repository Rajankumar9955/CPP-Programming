// brute force algorithm = all possible combination
#include<iostream>
#include<cstring>
using namespace std;
int main()
{    
    char s1[]="silent";
    char s2[]="listen";
    int c1=strlen(s1);
    int c2=strlen(s2);
    int c=0;
    if(c1==c2)
    {
        for(int i=0; i<c1; ++i)
        {
            for(int j=0; j<c1; ++j)
            {
                if(s1[i]==s2[j])
                {
                    c++;
                }
            }
        }
        if(c==c1)
        {
            cout<<"anagram";
        }
        else{
            cout<<"not anagram";
        }
        }
        else
        {
            cout<<" not anagram";
        }
    }




// WAP TO CHECK THE GIVEN STRING IS ANAGRAM OR NOT?
// INPUT    STR1=LISTEN  STR2=SILENT
// OUTPUT   YES 

#include<iostream>
#include<cstring>
using namespace std;
int main()
{    
    char s1[]="silent";
    char s2[]="listen";
    int c1=strlen(s1);
    int c2=strlen(s2);
    int c=0;
    for(int i=0; i<c1; ++i)
    {
        for(int j=0; j<c2; ++j)
        {
            if(s1[i]==s2[j])
            {
                c++;
            }
        }
    }
    if(c==c1)
    {
        cout<<"Anagram";

    }
    else
    {
      cout<<"not Anagram";

    }
}


