/*#include<iostream>
using namespace std;
#include<cstring>
int main()
{
    char c[10];
    int n;
    cout<<"enter ur name\n";
    cin>>c;
    n=strlen(c);
    for(int i=n-1; i>=0; --i)
    {
        cout<<c[i];
    }
}
*/

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char r[20];
    int s;
    cout<<"enter the word:";
    cin>>r;
    s=strlen(r);
    for(int i=s-1; i>=0; --i)
    {
        cout<<r[i];
    }
}

