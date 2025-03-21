class Solution {
    public:
        vector<string> findAllRecipes(vector<string>& rec, vector<vector<string>>& ingr, vector<string>& supp) {
            unordered_map<string, vector<string>> depMap;
            unordered_map<string, int> inDeg;
            
            for (int i = 0; i < rec.size(); ++i) {
                for (const auto& ing : ingr[i]) {
                    depMap[ing].push_back(rec[i]);
                }
                inDeg[rec[i]] = ingr[i].size();
            }
            queue<string> q;
            for (const auto& s : supp) {
                q.push(s);
            }
            vector<string> res;
            while (!q.empty()) {
                int sz = q.size();
                while (sz--) {
                    string ing = q.front();
                    q.pop();
                    for (const auto& r : depMap[ing]) {
                        if (--inDeg[r] == 0) {
                            res.push_back(r);
                            q.push(r);
                        }
                    }
                }
            }  
            return res;
        }
    };
    