#include<iostream>
int evenodd(int a[],int n)
{
    int curr=1;
    int res=1;
    for (int i = 1; i < n; i++)
    {
        if(a[i]%2==0&&a[i-1]%2!=0 || a[i]%2!=0&&a[i-1]%2==0)
        {
            curr++;
            res=std::max(res,curr);
        }
        else
        curr=1;
    }
    return res;
}
int main(int argc, char const *argv[])
{
    int a[]={1,2,3,4,2,3};
    int n=6;
    int s=evenodd(a,n);
    std::cout<<s;
    return 0;
}
