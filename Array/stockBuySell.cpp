#include<iostream>
int maxpro(int price[],int n)
{
    int p=0;
    for (int i = 1; i < n; i++)
    {
        if(price[i]>price[i-1])
        p+=(price[i]-price[i-1]);
    }
    return p;
}
int main(int argc, char const *argv[])
{
    int arr[]={1,5,3,8,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    int s= maxpro(arr,n);
    std::cout << s << std::endl;
    return 0;
}
