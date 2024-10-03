#include<iostream>
#include<unordered_set>
using namespace std;
void findEle(int a[],int b[],int m,int n)
{
    unordered_set<int> s(b,b+n);
    for(int i=0;i<m;i++)
    if(s.find(a[i])!=s.end())
    cout<<a[i]<<" ";
}
int main()
{
    int a[]={10,20,30,40};
    int b[]={10,30};
    int m=sizeof(a)/sizeof(a[0]);
    int n=sizeof(b)/sizeof(b[0]);
    findEle(a,b,m,n);
    return 0;
}