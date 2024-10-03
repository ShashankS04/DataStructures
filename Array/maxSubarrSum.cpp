 #include<iostream>
 int maxSum(int arr[],int n)
 {
    int res=arr[0];
    int maxEnding=arr[0];
    for (int i = 1; i < n; i++)
    {
        maxEnding =std::max(maxEnding+arr[i],arr[i]);
        res=std::max(res,maxEnding);
    }
    return res;
 }
 int main(int argc, char const *argv[])
 {
    int arr[]={-3,8,-2,4,-5,6};
    int n=6;
    int s=maxSum(arr,n);
    std::cout<<s; 
    return 0;
 }
 