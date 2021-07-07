#include<iostream>
using namespace std;
int main()
{
    int num,i,count=0;
    cout<<"Enter a number";
    cin>>num;
    for(i=2;i<=num;i++){
        if(num%i==0){
            count=count+1;
        }
    
    }
    if(count==1){
        cout<<"Prime number";
    }else{
        cout<<"Not a prime";
    }
}