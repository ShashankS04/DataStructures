import java.util.*;
public class anagram {
    static boolean isAnagram(String s1,String s2){
        if(s1.length()!=s2.length())
        return false;
        int count[]=new int[256];
        for(int i=0;i<s1.length();i++){
            count[s1.charAt(i)]++;
            count[s2.charAt(i)]--;
        }
        for(int i=0;i<256;i++){
            if(count[i]!=0)
            return false;
        }
        return true;
    }
    public static void main(String[] args) {
        String s1="aabcc";
        String s2="cbcab";
        System.out.println(isAnagram(s1,s2));
    }
}
