public class SumofDig {
    static int getSum(int n)
    {
        if(n<=9)
        return n;
        else
        return(getSum(n/10)+n%10);
    }
     public static void main(String[] args) {
        int n=5234;
        int s=getSum(n);
        System.out.println(s);
    }
}
