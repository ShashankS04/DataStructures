import java.util.*;
public class test {
    public static void main(String[] args) {
        HashSet<String> m=new HashSet<String>();
        m.add("gfg");
        m.add("ide");
        m.add("sss");
        System.out.println(m.size());
        m.remove("ide");
        for(String s:m)
        System.out.println(s+" ");
        m.clear();
        System.out.println(m.size());
    }
}
