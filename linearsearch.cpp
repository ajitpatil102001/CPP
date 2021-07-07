#include<iostream>
using namespace std;
int main()
{
    int a[5]={10,40,65,76,90},i,search;
    cout<<"Enter a number to search =";
    cin>>search;
    for(i=0;i<=5;i++)
    {
        if(a[i]==search){
            cout<<"Element Found";
            break;
        }
        

    }
    
        cout<<"Element not found";
}