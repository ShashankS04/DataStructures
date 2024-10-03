package searching;

public class BinaryRec {
    static int bSearch(int arr[],int low,int high,int x )
    {
        if(low>high)
        return -1;
        
        int mid=(low+high)/2;
        if(arr[mid]==x)
        return mid;
        else if(arr[mid]>x)
        return bSearch(arr,low,mid-1,x);
        else 
        return bSearch(arr,mid+1, high, x);
        
    }
    public static void main(String[] args) {
        int arr[]={1,2,3,4,5};
        int s=bSearch(arr, 0, 4, 4);
        if(s<0)
        System.out.println("not found");
        else
        System.out.println(s);
    }
}
