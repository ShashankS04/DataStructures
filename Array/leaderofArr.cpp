#include<iostream>
void leader(int arr[],int n)
{
    int cur_led=arr[n-1];
    std::cout<<"leaders: "<<cur_led<<" ";
    for (int i = n-2; i>=0; i--)
    {
        /* code */
        if(cur_led<arr[i])
        {
            cur_led=arr[i];
            std::cout <<cur_led<<" ";
        }
    }
}    
int main(int argc, char const *argv[])
{
    int arr[]={10,4,6,8,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    leader(arr,n);
    return 0;
}
