#include<iostream>
#include<algorithm>
 int getWater(int arr[],int n)
 {
    int res=0;
    int lomax[n];
    int rtmax[n];
    lomax[0]=arr[0];
    for(int i=1;i<n;i++)
    lomax[i]=std::max(lomax[i-1],arr[i]);
    rtmax[n-1]=arr[n-1];
    for (int i = n-2; i>=0; i--)
    rtmax[i]=std::max(rtmax[i+1],arr[i]);
    for (int i = 1; i < n; i++)
    res=res+(std::min(lomax[i],rtmax[i])-arr[i]);
    return res;
 }
 int main(int argc, char const *argv[])
 {
    int arr[]={5,0,6,2,3};
    int n=5;
    int s=getWater(arr,n);
    std::cout<<s<<" ";
    return 0;
 }