#include<iostream>
int maxConsec(bool arr[],int n)
{
    int res=0,cur=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==0)
        {
            cur=0;
        }
        else{
            cur++;
            res=std::max(res,cur);
        }
    }
    return res;
}
int main(int argc, char const *argv[])
{
    bool a[]={0,1,1,1,0,1,1};
    int n=7;
    int s=maxConsec(a,n);
    std::cout <<s<< " " << std::endl;
    return 0;
}
