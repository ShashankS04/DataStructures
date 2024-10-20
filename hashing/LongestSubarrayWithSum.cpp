#include<iostream>
#include<unordered_map>
using namespace std;
int maxlen(int a[],int n,int sum){
        unordered_map<int,int> m;
        int pre_sum=0,res=0;
        for(int i=0;i<n;i++)
        {
            pre_sum+=a[i];
            if(pre_sum==sum)
            res=i+1;
            if(m.find(pre_sum)==m.end())
            m.insert({pre_sum,i});
            if(m.find(pre_sum-sum)!=m.end())
            res=max(res,i-m[pre_sum-sum]);
        }
        return res;
    }

int main()
{
    int a[]={5,2,4,-1};
    int n=sizeof(a)/sizeof(a[0]);
    int s=5;
    cout<<maxlen(a,n,s);
}
    