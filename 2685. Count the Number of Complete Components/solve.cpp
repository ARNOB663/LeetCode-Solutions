class Solution {
    public:
        int countCompleteComponents(int n, vector<vector<int>>& edges) {
            vector<vector<int>> graph(n); 
            vector<bool> visited(n, false);
            for (auto& edge : edges) {
                int a = edge[0], b = edge[1];
                graph[a].push_back(b);
                graph[b].push_back(a);
            }
            function<pair<int, int>(int)> dfs = [&](int node) -> pair<int, int> {
                visited[node] = true;
                int verticesCount = 1;  
                int edgesCount = graph[node].size(); 
    
                for (int neighbor : graph[node]) {
                    if (!visited[neighbor]) {
                        auto [subtreeVertices, subtreeEdges] = dfs(neighbor);
                        verticesCount += subtreeVertices;
                        edgesCount += subtreeEdges;
                    }
                }
                return make_pair(verticesCount, edgesCount);
            };
    
            int completeComponents = 0; 
            for (int i = 0; i < n; ++i) {
                if (!visited[i]) {
                    auto [componentVertices, componentEdges] = dfs(i);
    
                    if (componentVertices * (componentVertices - 1) == componentEdges) {
                        completeComponents++;
                    }
                }
            }
            return completeComponents;  
        }
    };