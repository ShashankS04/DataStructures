
import java.util.*;
public class dfs {
    static void addEdge(ArrayList<ArrayList<Integer>> adj,int u,int v){
        adj.get(u).add(v);
        adj.get(v).add(u);
    }
    static void dfsrec(ArrayList<ArrayList<Integer>> adj,int s,boolean visited[]){
        visited[s]=true;
        System.out.print(s+" ");
        for(int u:adj.get(s)){
            if(visited[u]==false)
            dfsrec(adj, u, visited);
        }
    }
    static void DFS1(ArrayList<ArrayList<Integer>> adj,int v,int s)
    {
        boolean visited[]=new boolean[v];
       for(int i=0;i<v;i++){
            if(visited[i]==false){
                dfsrec(adj, i, visited);
            }
        }
       // dfsrec(adj,s,visited);
    }
    public static void main(String[] args) 
	{  
		int V = 7; 
		ArrayList<ArrayList<Integer> > adj = new ArrayList<ArrayList<Integer>>(V); 
		
		for (int i = 0; i < V; i++) 
			adj.add(new ArrayList<Integer>()); 

			addEdge(adj,0,1); 
        	addEdge(adj,0,2); 
        	addEdge(adj,2,3); 
        	addEdge(adj,1,3); 
        	addEdge(adj,1,4);
        	addEdge(adj,3,4);
		
		System.out.println("Following is Depth First Traversal: "); 
	    DFS1(adj,V,0);
	} 
}
