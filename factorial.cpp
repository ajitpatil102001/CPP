#include<iostream>
using namespace std;
int main()
{
    int num,i,fact=1;
    cout<<"Enter a number";
    cin>>num;
    for(i=num;i>=1;i--)
    {
        fact=fact*i;
    }
    cout<<"Factorial no is"<<fact;
    return 0;
}