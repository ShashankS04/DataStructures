public class Josephus {
    static int jos(int n,int k)
    {
        if(n==1)
        return 0;
        else
        return(((jos(n- 1, k)+k)+1)%n);
         
    }
    public static void main(String[] args) {
        int s=jos(3, 2);
        System.out.println(s);
    }
}
