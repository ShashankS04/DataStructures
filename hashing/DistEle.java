import java.util.*;
public class DistEle {
    static int CountDis(int a[],int n)
    {
        HashSet<Integer> m=new HashSet<Integer>();
        for(int i=0;i<n;i++)
        m.add(a[i]);
        return m.size();
    }
    public static void main(String[] args) {
        int a[]={10,20,20,30,40,10};
        System.out.println(CountDis(a,6));
    }
}
