import java.util.*;
public class test2 {
    public static void main(String[] args) {
        HashMap<String,Integer> m=new HashMap<String,Integer>();
        m.put("one",1);
        m.put("two",2);
        m.put("three",3);
        System.out.println(m);
        System.out.println(m.size());
        for(Map.Entry<String,Integer> e:m.entrySet())
        System.out.println(e.getKey()+" "+e.getValue());
        if(m.containsKey("one"))
        System.out.println("Yes");
        else
        System.out.println("No");
        m.remove("one");
        System.out.println(m.size());
        }
    
}
