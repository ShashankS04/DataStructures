import java.util.*;
class binarySearch
{
static int bSearch(int arr[],int x)
{
    int low=0,high=arr.length-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==x)
        return mid;
        else if(arr[mid]>x)
        high=mid-1;
        else 
        low=mid+1;
    }
    return -1;
}
public static void main(String[] args) {
    int arr[]={1,2,3,4,5,6};
    int x=4;
    int s=bSearch(arr, x);
    if(s<0)
    System.out.println("Not found");
    else
    System.out.println(s+1);
}
}
