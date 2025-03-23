class Solution {
    public:
        
        const ll INF = LLONG_MAX / 2; 
        const int MOD = 1e9 + 7; 
    
        int countPaths(int n, vector<vector<int>>& roads) {
            vector<vector<pair<int, ll>>> graph(n);
            vector<ll> distances(n, INF);
            vector<ll> ways(n, 0);
            vector<bool> visited(n, false);
          
            for (auto& road : roads) {
                int u = road[0], v = road[1];
                ll t = road[2];
                graph[u].emplace_back(v, t);
                graph[v].emplace_back(u, t);
            }
            priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<>> pq;
          
            distances[0] = 0;
            ways[0] = 1;
            pq.push({0, 0});
          
            while (!pq.empty()) {
                auto [distance, u] = pq.top();
                pq.pop();
                if (visited[u]) 
                    continue;
                visited[u] = true;
    
                for (auto& [v, t] : graph[u]) {
                    ll nextDistance = distances[u] + t;
                    if (distances[v] > nextDistance) {
                        distances[v] = nextDistance;
                        ways[v] = ways[u];
                        pq.push({nextDistance, v});
                    } else if (distances[v] == nextDistance) {
                        ways[v] = (ways[v] + ways[u]) % MOD;
                    }
                }
            }
            return ways[n - 1];
        }
    };