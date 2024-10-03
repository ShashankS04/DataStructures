#include<iostream>
using namespace std;
const int CHAR=256;
int leftMaost(string s){
    bool visit[CHAR];
    fill(visit,visit+CHAR,false);
    int res=-1;
    for(int i=s.length()-1;i>=0;i--){
        if(visit[s[i]])
        res=i;
        else
        visit[s[i]]=true;
    }
    return res;
}
int main(){
    string s="aggabb";
    cout<<leftMaost(s);
}