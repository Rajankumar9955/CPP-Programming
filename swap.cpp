/*#include<iostream>
using namespace std;
int main(){
    int a=10, b=15, temp;
    cout<<"before swapping"<< endl;
    cout<<"a = "<< a <<" b = "<< b << endl;

    temp = a;
    a=b;
    b=temp;
    cout<<"after swapping"<<endl;
    cout<<"a = "<< a <<" b = "<<b <<endl;
    return 0;


}
*/
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter two no: ";
    cin>>a>>b;

    c=a;
    a=b;
    b=c;
    cout<<"swapping after two no is: "<<endl;
    cout<<a<<" "<<b<<" "<<endl;
    return 0;
}

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b,c;
//     cout<<"enter first number:";
//     cin>>a;
//     cout<<"enter the second number:";
//     cin>>b;


//     c=a;
//     a=b;
//     b=c;
//     cout<<"after swapping of two number is:";
//     cout<<a<<b;
// }