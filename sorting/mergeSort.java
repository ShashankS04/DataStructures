/**
 * mergeSort
 */

public class mergeSort {
    static void merge(int a[],int l,int m,int h)
    {
        int n1=m-l+1;
        int n2=h-m;
        int left[]=new int[n1];
        int right[]=new int[n2];
        for(int i=0;i<n1;i++)
        left[i]=a[i+l];
        for(int j=0;j<n2;j++)
        right[j]=a[m+j+1];
        int i=0,j=0,k=l;
        while(i<n1&&j<n2)
        {
            if(left[i]<=right[j])
            a[k++]=left[i++];
            else
            a[k++]=right[j++];
        }
        while(i<n1)
        a[k++]=left[i++];
        while(j<n2)
        a[k++]=right[j++];
    }
    static void mergeSorting(int a[],int l,int h){
    if(h>l)
    {int m=(l+h)/2;
    mergeSorting(a, l, m);
    mergeSorting(a, m+1, h);
    merge(a, l, m, h);
}
}

public static void main(String[] args) {
    int a[] = new int[]{10,5,30,15,7};
    int l=0,r=4;
    
    mergeSorting(a,l,r);
    for(int x: a)
        System.out.print(x+" ");    
}
} 