public class rotation {
    static boolean areRot(String s1,String s2){
        if(s1.length()!=s2.length()) return false;
        return((s1+s1).indexOf(s2)>=0);
    }

    public static void main(String[] args) {
        String S1="ABCD";
        String S2="CDAB";
        System.out.println(areRot(S1,S2));
    }
}
