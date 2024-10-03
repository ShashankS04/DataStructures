package sorting;

public class bubbleSort {
    static void Bubble(int a[])
    {
        boolean swapped;
        for(int i=0;i<a.length;i++)
        {
            swapped=false;
            for(int j=0;j<a.length-i-1;j++)
            {
                if(a[j]>a[j+1]){
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
                swapped=true;    
            }
            }
            if(swapped==false)
            break;
        }
    }

    
    public static void main(String[] args) {
        int a[]={10,30,20,40,50};
        Bubble(a);
        for(int x : a)
        System.out.println(x);
    }
}
