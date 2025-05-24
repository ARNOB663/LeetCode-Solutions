class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int, int> rank;
        int r = 1;
        vector<int> sorted = arr;
        sort(sorted.begin(), sorted.end());

        for (int i = 0; i < sorted.size(); ++i) {
            if (rank[sorted[i]] == 0) {
                rank[sorted[i]] = r++;
            }
        }
        for (int i = 0; i < arr.size(); ++i) {
            arr[i] = rank[arr[i]];
        }
        return arr;
    }
};