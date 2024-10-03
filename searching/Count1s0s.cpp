#include<iostream>
#include<vector>
using namespace std;
int countOnes(vector <int> a,int x)
{
    int n=a.size();
    int low=0,high=n-1;
    while(low<high)
    {
        int mid=(low+high)/2;
        if(a[mid]==0)
        low=mid+1;
        else if(mid==0||a[mid-1]==0)
        return(n-mid);
        else
        high=mid-1;
    }
    return 0;
}
int main()
{
    vector<int>a={0,0,1,1,1,1};
    int s=countOnes(a,1);
    cout<<s<<" ";
    return 0;
}
