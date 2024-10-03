 #include <iostream>
using namespace std;
 int remDup(int arr[],int n)
 {
    int res=1;
    for(int i=1;i<n;i++)
    {
     if(arr[i]!=arr[res-1])
     {
        arr[res]=arr[i];
        res++;
     }
    }
         return res;
 }
 int main()
 {
    int arr[]={10,20,20,30,30,30};
    int n=sizeof(arr)/sizeof(arr[0]);
    int n1=remDup(arr,n);
    for(int i=0;i<n1;i++)
    cout<<arr[i]<<" ";
    return 0;
 }
 