#include<iostream>
void printFreq(int arr[],int n)
{
    int freq=1,i=1;
    while(i<n)
    {
        while(i<n&&arr[i]==arr[i-1])
        {
            freq++;
            i++;
        }
        std::cout<<arr[i-1]<< " " << freq<<"\n";
        i++;
        freq=1;
    }
    if(n==1|| arr[n-1]!=arr[n-2])
    std::cout <<arr[n-1]<< " " << 1<<"\n";
}
int main(int argc, char const *argv[])
{
    int arr[]={10,10,20,20,20,30,60};
    int n=7;
    printFreq(arr,n);
    return 0;
}
