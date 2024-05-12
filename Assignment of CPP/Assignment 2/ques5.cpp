#include<iostream>
using namespace std;
int main()
{
    int n=1;
    cout<<"printing the odd number between 1 to 100:";
    while(n<=100)
    {
        if(n%2!=0)
        {
            cout<<n<<"\t";
        }
        n++;
    }
}
/*
output:-
printing the odd number between 1 to 100:1      3       5       7       11       13      15      17      19      21      23      25      27      29       31      33      35      37      39      41      43      45      47       49      51      53      55      57      59      61      63      65       67      69      71      73      75      77      79      81      83       85      87      89      91      93      95      97      99
*/