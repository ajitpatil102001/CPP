#include<iostream>
using namespace std;
void func1(array[],int length)
{
    int sum=0;
    int product=1;
    for(int i=1;i<=length;i++)
    {
        sum=sum+array[i];
    }
    for(int i=1;i<=length;i++)
    {
        product=product*array[i];
    }
}
int main()
{
    int arr[]={23,54,78,34};
    func(arr,4);
    return 0;
}