#include<iostream>
#include<algorithm>
using namespace std;
static int iPart(int a[],int l,int h,int p)
{
        swap(a[p],a[h]);
        int pivot=a[h];
        int i=l-1;
        for(int j=l;j<=h-1;j++)
        {
            if(a[j]<=pivot)
            {
                i++;
                swap(a[i],a[j]);
            }
        }
        swap(a[i+1],a[h]);
        return i+1;
}
int main(int argc, const char** argv) {
    int arr[]={10,80,30,90,40,50,70};
	int n=sizeof(arr)/sizeof(arr[0]);
    int s=iPart(arr,0,n-1,6);
    for(int x: arr)
    cout<<x<<" ";
    return 0;
}

