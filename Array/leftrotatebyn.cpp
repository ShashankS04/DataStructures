#include<iostream>
#include <cmath>
using namespace std;
void reversed(int arr[],int low,int high)
{
    while(low<high)
    {
        swap(arr[high],arr[low]);
        low++;
        high--;
    }
}
void leftRotate(int arr[],int d,int n)
{
    reversed(arr,0,d-1);
    reversed(arr,d,n-1);
    reversed(arr,0,n-1);
}


int main(int argc, char const *argv[])
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    leftRotate(arr,2,5);
    for (int i = 0; i < n; i++)
    {
        /* code */
        std::cout<<arr[i]<<" ";
    }
    return 0;
}
