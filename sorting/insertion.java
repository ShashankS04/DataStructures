import java.util.*;
public class insertion
{
    static void Insort(int a[])
    {
        for(int i=1;i<a.length;i++)
        {
            int key=a[i];
            int j=i-1;
            while(j>=0&& a[j]>key)
            {
                a[j+1]=a[j];
                j--;
            }
            a[j+1]=key;
        }
    }
    public static void main(String[] args) {
        int a[]={10,30,20,50,15};
        Insort(a);
        for (int i : a) {
            System.out.println(i);
        }
    }
}