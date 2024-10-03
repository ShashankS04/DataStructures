import java.util.*;

public class MaxScore {
    public static long treePoints(int g_nodes, List<Integer> A, int K, List<Integer> g_from, List<Integer> g_to) {
        // Initialize the tree using an adjacency list
        List<List<Integer>> tree = new ArrayList<>();
        for (int i = 0; i < g_nodes; i++) {
            tree.add(new ArrayList<>());
        }
        for (int i = 0; i < g_nodes - 1; i++) {
            tree.get(g_from.get(i)).add(g_to.get(i));
            tree.get(g_to.get(i)).add(g_from.get(i));
        }

        // Initialize the dp array
        long[] dp = new long[g_nodes];

        // Perform DFS traversal
        dfs(0, -1, tree, A, K, dp);

        // Return the maximum total points
        return dp[0];
    }

    private static long dfs(int node, int parent, List<List<Integer>> tree, List<Integer> A, int K, long[] dp) {
        // Calculate the maximum points for the current node
        long points1 = A.get(node) - K;
        long points2 = A.get(node) / 2;
        for (int child : tree.get(node)) {
            if (child != parent) {
                points1 += dfs(child, node, tree, A, K, dp);
                points2 += dfs(child, node, tree, A, K, dp) / 2;
            }
        }
        dp[node] = Math.max(points1, points2);
        return dp[node];
    }

    public static void main(String[] args) {
        // Example usage
        int g_nodes = 4;
        List<Integer> A = Arrays.asList(10, 10,3,3);
        int K = 5;
        List<Integer> g_from = Arrays.asList(0,1,2);
        List<Integer> g_to = Arrays.asList(1,2,3);
        long maxPoints = treePoints(g_nodes, A, K, g_from, g_to);
        System.out.println("Maximum points: " + maxPoints);
    }
}