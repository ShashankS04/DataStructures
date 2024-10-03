#include<iostream>
using namespace std;
void pattsearch(string &str,string &p){
    int n=str.length();
    int m=p.length();
    for(int i=0;i<=n-m;){
        int j;
        for(j=0;j<m;j++)
        if(p[j]!=str[i+j])
        break;

        if(j==m)
        cout<<i<<" ";  
        if(j==0)
        i++;
        else
        i+=j;  
    }
}
int main(){
    string s="abcdcabc";
    string p="abc";
    pattsearch(s,p);
    return 0;
}