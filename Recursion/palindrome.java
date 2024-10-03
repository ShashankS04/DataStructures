import java.util.*;
class palindrome{
static boolean isPalin(String str, int start, int end)
{
 if(start>=end)
 return true;
 return(str.charAt(start)==str.charAt(end)&& isPalin(str,start+1,end-1)) ;  
}
/**
 * @param a
 */
public static void main(String a[])
{
    String a1="abcba";
    int n=a1.length();
    boolean s= isPalin(a1,0,n-1);
    if(s==true)
    System.out.println("Palindrome");
    else
    System.out.println("Not palindrome");
}
}