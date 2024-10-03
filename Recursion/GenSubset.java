//subset=subsequences
public class GenSubset {
    static void subsets(String s,String cur,int i)
    {
        if(i==s.length()){
        System.out.print(cur+" ");
        return;
        }
        subsets(s,cur,i+1);
        subsets(s,cur+s.charAt(i),i+1);
    }  
    public static void main(String[] args) {
        String s="ABC";
        subsets(s,"",0);
    }
}
