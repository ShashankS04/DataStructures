#include <iostream>
using namespace std;
bool isSorted(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        if (arr[i]<arr[i-1])
        {
            return false;
        }
    }
    return true;

}
int main(int argc, const char** argv) {
    int arr[]={1,2,4,9,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    bool s=isSorted(arr,n);
    if(s==false)
    cout<<"Not Sorted"<<"\n";
    else
    cout<<"Sorted"<<"\n";
    return 0;
}