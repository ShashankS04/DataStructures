#include<iostream>
int maxdif(int arr[],int n)
{
    int res=arr[1]-arr[0];
    int min_val=arr[0];
    for (int j = 1; j < n; j++)
    {
        res= std::max(res,arr[j]-min_val);
        min_val= std::min(arr[j],min_val);
    }
    return res;
}
int main(int argc, char const *argv[])
{
    int arr[]={2,3,10,6,4,8,1};
    int n=7;
    int s=maxdif(arr,n);
    std::cout <<s<< std::endl;
    return 0;
}
