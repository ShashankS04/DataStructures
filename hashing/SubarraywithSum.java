import java.util.*;
public class SubarraywithSum {
    static boolean isSum(int a[],int s){
        Set<Integer> m=new HashSet<Integer>();
        int pre_sum=0;
        for(int i=0;i<a.length;i++){
            pre_sum+=a[i];
            if(pre_sum==s)
            return true;
            if(m.contains(pre_sum-s)==true)
            return  true;
            m.add(pre_sum);
        }
        return false;
    }
    public static void main(String[] args) {
        int a[]={1,2,4,-1,5};
        int s=4;
        System.out.println(isSum(a,s));
    }
}