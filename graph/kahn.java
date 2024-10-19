import java.util.*;

public class kahn {
    static void addEdge(ArrayList<ArrayList<Integer>> adj,int u,int v){
        adj.get(u).add(v);
    }
    static void KahnAlgo(ArrayList<ArrayList<Integer>> adj,int V){
        int inDeg[]=new int[V];
        Queue<Integer> Q=new LinkedList<>();
        for(int i=0;i<V;i++)
        for(int v: adj.get(i))
        inDeg[v]++;

        for(int i=0;i<V;i++)
        if(inDeg[i]==0)
        Q.add(i);

        while(Q.isEmpty()==false){
            int u=Q.poll();
            System.out.println(u);
            for(int v:adj.get(u)){
                if(--inDeg[v]==0)
                Q.add(v);
            }
        }
    }
    public static void main(String[] args) {
        int V = 5; 
		ArrayList<ArrayList<Integer> > adj = new ArrayList<ArrayList<Integer>>(V); 
		
		for (int i = 0; i < V; i++) 
			adj.add(new ArrayList<Integer>()); 

			addEdge(adj,0, 2); 
            addEdge(adj,0, 3); 
            addEdge(adj,1, 3); 
            addEdge(adj,1, 4); 
            addEdge(adj,2, 3);
		
		System.out.println("Following is a Topological Sort of"); 
        KahnAlgo(adj,V);
    }
}

