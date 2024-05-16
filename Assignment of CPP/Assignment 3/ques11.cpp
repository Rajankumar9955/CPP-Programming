#include<iostream>
using namespace std;
int main()
{
  int i,j,k,len=0;
  cout<<"enter the number of elements:";
  cin>>len;
  int num[len];
  cout<<"\nenter elements:";
  for(i=0; i<len; ++i)
  {
    cin>>num[i];
  }
  for(i=0; i<len; ++i)
  {
    for(j=i+1; j<len; j++)
    {
        if(num[i]==num[j])
        {
            for(k=j; k<len; k++)
            {
                num[k]=num[k+1];
            }
            len--;
            j--;
        }
    }
  }
  cout<<"\n after remove elements:";
  for(i=0; i<len; i++)
  {
    cout<<num[i]<<" ";
  }
}

/*
output:-
enter the number of elements:5

enter elements:1
2
1
2
3

 after remove elements:1 2 3
*/
