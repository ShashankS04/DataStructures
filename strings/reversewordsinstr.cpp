#include<iostream>
using namespace std;
void reverseW(char str[],int strt,int end){
    while(strt<end){
        swap(str[strt],str[end]);
        strt++;
        end--;
    }
}
void revStr(char s[],int n){
    int start=0;
    for(int end=0;end<n;end++){
        if(s[end]==' '){
        reverseW(s,start,end-1);
        start=end+1;
        }
    }
    reverseW(s,start,n-1);
    reverseW(s,0,n-1);
}

int main(){
    string s="welcome to dsa";
    int n=s.length();
    char str[n];
    strcpy(str,s.c_str());
    revStr(str,n);
    cout<<str;
}