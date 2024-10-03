#include <iostream>
void rotate(int arr[],int n)
{
    int t=arr[0];
    for(int i=1;i<n;i++)
    arr[i-1]=arr[i];
    arr[n-1]=t;
}
int main(int argc, char const *argv[])
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    rotate(arr,n);
    for (int i = 0; i < n; i++)
    {
        std::cout<<arr[i]<<" ";
    }
    return 0;
}
