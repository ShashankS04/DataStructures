#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int m=3,n=2;
    vector<vector<int> > arr;
    for(int i=0;i<m;i++)
    {
        vector<int>a;
        for(int j=0;j<n;j++)
        {
            a.push_back(10);
        }
        arr.push_back(a);
    }
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    cout<<arr[i][j]<<" ";
}