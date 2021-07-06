#include<iostream>
using namespace std;
int main()
{
    int num,i,f1=0,f2=1,f=0;
    cout<<"Enter a number=";
    cin>>num;
    for(i=0;i<=num;i++)
    {
        f1=f2;
        f2=f;
        f=f1+f2;
        cout<<f<<endl;

    }
}