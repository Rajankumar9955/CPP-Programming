/*   #include<iostream>
   #include<cstring>
   #include<cmath>
   using namespace std;
   int main()
   {
    char c1[20];
    int s;
    cout<<"enter name\n";
    cin>>c1;
    s=strlen(c1);
    for(int i =0; i<s; ++i)
    {
        for(int j=0; j<s-i-1; ++j)
        {
            if(c1[j]>c1[j+1])
      {
             swap(c1[j],c1[j+1]);
      }
    }
    }
    cout<<c1;
   
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
  for(int i=0; i<s; ++i)
  {
    for(int j=0; j<s-i-1; ++j)
    {
      if(r[j]>r[j+1])
      {
        swap(r[j],r[j+1]);
      }
    }
  }
  cout<<r;
}