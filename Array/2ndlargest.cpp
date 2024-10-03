#include <iostream>
using namespace std;
int secondlarg(int arr[],int n)
{
    int res=-1,larg=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[larg])
        {
            res=larg;
            larg=i;
        }
        else if(arr[i]!=arr[larg])
        {
            if(res==-1||arr[i]>arr[res])
            {
                res=i;
            }
        }
    }
    return res;
}
int main()
{
    /* code */
    int arr[]={10,20,4,22,21};
    int n=sizeof(arr)/sizeof(arr[0]);
    int s=  secondlarg(arr,n);
    cout<<arr[s]<<"\n";
    return 0;
}
