#include<iostream>
using namespace std;
void pattsearch(string &str,string &p){
    int n=str.length();
    int m=p.length();
    for(int i=0;i<=n-m;i++){
        int j;
        for(j=0;j<m;j++)
        if(p[j]!=str[i+j])
        break;

        if(j==m)
        cout<<i<<" ";    
    }
}
int main(){
    string s="AAAAAA";
    string p="AAA";
    pattsearch(s,p);
    return 0;
}