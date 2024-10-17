import java.util.*; 

class detectcycleundir { 

	static void addEdge(ArrayList<ArrayList<Integer>> adj, int u, int v) 
	{ 
		adj.get(u).add(v); 
		adj.get(v).add(u); 
	}
    static boolean DFSRec(ArrayList<ArrayList<Integer>> adj, int s,boolean visited[],int p ){
        visited[s]=true;
        for(int u:adj.get(s)){
            if(visited[u]!=true){
                if(DFSRec(adj,u,visited,s)==true)
                return true;
            }
            else if(u!=p)
            return true;
        }
        return false;
    }

    static boolean DFS(ArrayList<ArrayList<Integer>> adj,int n){
        boolean visited[]=new boolean[n];
        for(int i=0;i<n;i++){
            if(visited[i]!=true){
                if(DFSRec(adj, i, visited, -1)==true)
                return true;
            }
        }
        return false;
    }
    public static void main(String[] args) {
        ArrayList<ArrayList<Integer>> adj = new ArrayList<ArrayList<Integer>>();
        for (int i = 0; i < 6; i++) 
			adj.add(new ArrayList<Integer>()); 

			addEdge(adj,0,1); 
        	addEdge(adj,1,2); 
        	addEdge(adj,2,4); 
        	addEdge(adj,4,2); 
        	addEdge(adj,1,4);
        	addEdge(adj,2,3);
		
		if(DFS(adj,6)==true)
    	    System.out.println("Cycle found");
    	else
    	    System.out.println("No cycle found");
    }
}