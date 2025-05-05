class Solution {
    public:
        string pushDominoes(string d) {
            int n = d.size();
            queue<int> q;
            vector<int> t(n, -1);
            vector<string> f(n);
    
            for (int i = 0; i < n; i++) {
                if (d[i] == '.') continue;
                q.push(i);
                t[i] = 0;
                f[i] += d[i];
            }
    
            string res(n, '.');
    
            while (!q.empty()) {
                int i = q.front();
                q.pop();
    
                if (f[i].size() == 1) {
                    char dir = f[i][0];
                    res[i] = dir;
                    int ni = (dir == 'L') ? i - 1 : i + 1;
    
                    if (ni >= 0 && ni < n) {
                        int ct = t[i];
                        if (t[ni] == -1) {
                            q.push(ni);
                            t[ni] = ct + 1;
                            f[ni] += dir;
                        } else if (t[ni] == ct + 1) {
                            f[ni] += dir;
                        }
                    }
                }
            }
            return res;
        }
    };
    