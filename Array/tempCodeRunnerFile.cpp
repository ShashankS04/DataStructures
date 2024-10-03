void reverse(int arr[],int high,int low)
{
    while(low<high)
    {
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}
void swap(int a,int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
}