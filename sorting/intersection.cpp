#include<iostream>
void interOfArr(int a[],int b[],int n1,int n2)
{
    int i=0,j=0;
    while(i<n1&&j<n2)
    {
        if(i>0&&a[i]==a[i-1])
        {
            i++;
            continue;
        }
        if(a[i]>b[j])
        j++;
        else if(a[i]<b[j])
        i++;
        if(a[i]==b[j]){
        std::cout<<a[i]<<' ';
        i++;
        j++;
    }}
}
int main(int argc, char const *argv[])
{
    int a[]={10,20,20,40,60};
    int b[]={2,20,20,40};
    int n1=5,n2=4;
    interOfArr(a,b,n1,n2);
    return 0;
}
