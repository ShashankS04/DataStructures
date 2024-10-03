#include<iostream>
using namespace std;
bool isSubseq(string s1,string s2,int m,int n){
    int j=0;
    for(int i=0;i<n&&j<m;i++){
        if(s1[i]==s2[j])
        j++;
    }
    if(j==m)
    return true;
    else
    return false;
}
int main()
{
    string s1="sbcnh";
    string s2="ch";
    int n=s1.length();
    int m=s2.length();
    cout<<isSubseq(s1,s2,m,n);
    return 0;
}