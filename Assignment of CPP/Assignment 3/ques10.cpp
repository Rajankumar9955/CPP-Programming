#include<iostream>
using namespace std;
int main()
{
 int i,j,n,count = 0;
 cout<<"enter the size of the array\n";
 cin>>n;
 
 int arr[n];
 cout<<"input elements in the array\n";
 for(i=0; i<n; ++i)
{
  cout<<"element "<<i<<" - ";
  cin>>arr[i];
}
for(i=0; i<n; ++i)
{
  for(j=i+1; j<n; ++j)
  {
    if(arr[i] == arr[j])
    {
      count++;
      break;
    }
  }

}
cout<<"\nTotal number of duplicate elements found in array = "<<count;
 
}

/*
output:-
enter the size of the array
5
input elements in the array
element 0 - 2
element 1 - 2
element 2 - 1
element 3 - 1
element 4 - 3

Total number of duplicate elements found in array = 2
*/