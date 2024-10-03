 #include<iostream>
 using namespace std;
 void printUnion(int a[],int b[],int m,int n)
 {
    int i=0,j=0;
    while(i<m&&j<m)
    {
        if(i>0&&a[i]==a[i-1]){i++; continue;}
        if(j>0&&b[j]==b[j-1]){j++; continue;}
        if(a[i]<b[j]){ cout<<a[j]<<" "; i++;}
        else if(a[i]>b[j]){cout<<b[j]<<" "; j++;}
        else{cout<<a[i]<<" "; i++; j++;}
    }
    while(i<m)
    if(i>0&&a[i]!=a[i-1]){cout<<a[i]<<" "; i++;}
    while(j<n)
    if(j>0&&b[j]!=b[j-1]){cout<<b[j]<<" "; j++;}
}
int main(int argc, char const *argv[])
{
    int a[]={2,10,20,20};
    int b[]={3,20,40};
    int n=4,m=3;
    printUnion(a,b,n,m);
    return 0;
}
