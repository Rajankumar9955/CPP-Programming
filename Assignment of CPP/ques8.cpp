#include<iostream>
using namespace std;
int main()
{
    char num;
    cout<<"Enter the word for check the vowel and constant:";
    cin>>num;
    if(num=='a' || num=='i'|| num=='e' || num=='o'|| num=='u' ||num=='A' || num=='E'|| num=='I' || num=='O'|| num=='U')
    {
        cout<<"this is vowel";
    }
    else
    {
        cout<<"consonant";
    }

}
/*
cout:-
Enter the word for check the vowel and constant:A
this is vowel
*/