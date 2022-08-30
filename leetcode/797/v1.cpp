class Solution {
public:
    vector<vector<int>> paths;
    
    void dfs(vector<vector<int>>& graph, int node, int destiny, vector<int> path) {
        // As soon as we enter the dfs, we push the node to our path
        path.push_back(node);
        
        // If the node is equal to the destiny, we push the array to our answer
        if (node == destiny)
            paths.push_back(path);
            
        // We check to see how many neighbors each node has, and we run dfs to each to get all paths
        for (auto vizinho : graph[node])
            dfs(graph, vizinho, destiny, path);
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int destiny = graph.size() - 1;
        
        dfs(graph, 0, destiny, {});
        return paths;
        
    }
};
