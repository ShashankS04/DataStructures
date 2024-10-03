#include<iostream>
void reverse(int arr[],int n)
{
    int high=n-1,low=0;
    while(low<high)
    {
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }
}
int main(int argc, char const *argv[])
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    reverse(arr,n);
    std::cout << "array is: ";   /* using namespace std*/
    for(int i = 0; i < n; i++)
       {
       		std::cout<<arr[i]<<" ";
       }
    return 0;
}
