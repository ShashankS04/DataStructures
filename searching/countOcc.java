import java.util.*;
public class countOcc {
    static int FirstOcc(int arr[],int x)
    {
        int low=0,high=arr.length-1;
        while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]<x)
        low=mid+1;
        else if(arr[mid]>x)
        high=mid-1;
        else 
        {
            if(mid==0||arr[mid-1]!=arr[mid])
            return mid;
            else
            high=mid-1; 
        }
    }
        return -1;
    }
    static int LastOcc(int arr[],int x)
    {
        int low=0,high=arr.length-1;
        while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]<x)
        low=mid+1;
        else if(arr[mid]>x)
        high=mid-1;
        else 
        {
            if(mid==arr.length-1||arr[mid+1]!=arr[mid])
            return mid;
            else
            low=mid+1; 
        }
    }
        return -1;
    }
    static int OccCount(int arr[],int x)
    {
        int first=FirstOcc(arr, x);
        if(first==-1)
        return 0;
        else
        return(LastOcc(arr, x)-first+1);
    }
    public static void main(String[] args) {
        int arr[]={10,20,20,20,30};
        int s=OccCount(arr,30);
        System.out.println(s);
    }
}
