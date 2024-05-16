#include<iostream>
using namespace std;
int main()
{
    int arrOne[20], arrTwo[50],arrThree[100];
    int sizeOne,sizeTwo,i,k;
    cout<<"enter the size for first array:";
    cin>>sizeOne;
    cout<<"enter "<<sizeOne<<" Elements for first Array:";
    for(i=0; i<sizeOne; ++i)
    {
        cin>>arrOne[i];
        arrThree[i]=arrOne[i];
    }
    k=i;
    cout<<"\nEnter the size for second array:";
    cin>>sizeTwo;
    cout<<"Enter "<<sizeTwo<<" elements for socond array:";
    for(i=0; i<sizeTwo; ++i)
    {
        cin>>arrTwo[i];
        arrThree[k]=arrTwo[i];
        k++;
    }
    cout<<"\nThe new array(Third array):\n";
    for(i=0; i<k; ++i)
    {
        cout<<arrThree[i]<<" ";
    }
}
/*
output:-
enter the size for first array:5
enter 5 Elements for first Array:1
2
3
4
5

Enter the size for second array:5
Enter 5elements for socond array:1
2
3
4
5

The new array(Third array):
1 2 3 4 5 1 2 3 4 5
*/