public class sqRoot {
    static int Findsqrt(int n)
    {
        int low=1,high=n,ans=-1;
            while(low<=high)
            {
                int mid=(high+low)/2;
                int sq=mid*mid;
                if(sq==n)
                return mid;
                else if(sq>n)
                high=mid-1;
                else{
                low=mid+1;
                ans=mid;
            }}
        return ans;
    }
    public static void main(String[] args) {
        int n=16;
        int s=Findsqrt(n);
        System.out.println(s);
    }
    
}
