#include <iostream>
using namespace std;
void moveZero(int arr[],int n)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
    if(arr[i]!=0)
    {
        swap(arr[i],arr[c]);
        c++;
    }
    }
}
void swap(int a,int b)
{
    int t=a;
    a=b;
    b=t;
}
int main(int argc, char const *argv[])
{
    int arr[]={1,2,0,0,5,7,0,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    moveZero(arr,n);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}
