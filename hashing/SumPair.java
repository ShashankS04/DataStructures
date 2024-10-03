import java.util.*;
public class SumPair {
    static boolean  isSumPair(int a[],int sum)
    {
        HashSet<Integer> s=new HashSet<Integer>();
        for(int x:a){
        if(s.contains(sum-x))
        return true;
        else
        s.add(x);
    }
    return false;
}
public static void main(String[] args) {
    int a[]={8,2,3,4,5};
    int s=1;
    System.out.println(isSumPair(a,s));
}
}
