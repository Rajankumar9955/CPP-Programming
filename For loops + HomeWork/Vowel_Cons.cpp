#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the character to check vowel or consonant: ";
    cin>>ch;
    if(ch== 'a' || ch=='A' || ch=='i'|| ch=='I'){
        cout<<"vowel";
    }
    else{
        cout<<"consonant";
    }
    return 0;
    // char ch;
    // cout<<"enter the character to check vowel or consonant: ";
    // cin>>ch;
    // if(ch=='a' || ch =='A' || ch=='e' || ch =='E' || ch=='i' || ch =='I' || ch=='o' || ch =='O' ||
    //    ch=='u' || ch =='U')
    //    {
    //     cout<<"Vowel";
    //    }
    //    else{
    //     cout<<"Consonant";
    //    }
    //    return 0;
}