#include<iostream>
#include<algorithm>
void selcSort(int a[],int n)
{
for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n-1;j++)
        {
            if(a[j]<a[min])
            min=j;
        }
        std::swap(a[i],a[min]);
    }
}
int main(int argc, char const *argv[])
{
    int a[]={2,4,1,3,6};
    int n=5;
    selcSort(a,n);
    for(int x : a)
    std::cout<<x<<" ";
    return 0;
}
