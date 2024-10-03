import java.util.*;

public class unionEx {
static int FindUnion(int a[],int b[])
{
    HashSet<Integer> s=new HashSet<Integer>();
    for(int x: a)
    s.add(x);
    for(int x:b)
    s.add(x);
    return s.size();
}
public static void main(String[] args) {
    int a[]={10,20,20};
    int b[]={30,10,10};
    System.out.println(FindUnion(a,b));
}   
}
