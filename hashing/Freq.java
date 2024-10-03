import java.util.*;
public class Freq {
    static void  findFrequencies(int a[])
    {
        HashMap<Integer,Integer> m=new HashMap<Integer,Integer>();
        for(int x:a)
        m.put(x,m.getOrDefault(x,0)+1);   // C++ h[a[i]]++
        for(Map.Entry<Integer,Integer> e: m.entrySet())
        System.out.println(e.getKey()+" "+e.getValue());
    }
    public static void main(String[] args) {
        int a[]={50,30,50,40,30};
        findFrequencies(a);
    }
}
