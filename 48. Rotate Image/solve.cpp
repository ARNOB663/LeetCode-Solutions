//brute solve
class Solution {
    public:
        void rotate(vector<vector<int>>& matrix) {
            int n = matrix.size();
           vector<vector<int>> ans(n, vector<int>(n));
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++){
                    int z=n-i;
                    ans[j][n-1-i]= matrix[i][j];
                }
            }
            matrix=ans;
            
        }
    };
//better approach
// This code is a better solution to the problem of rotating a matrix by 90 degrees clockwise.
// It uses a two-step approach: first, it transposes the matrix, and then it reverses each row.
class Solution {`
    public:
        void rotate(vector<vector<int>>& matrix) {
            int n = matrix.size();
           
            for(int i=0;i<n;i++)
            {
                for(int j=i+1;j<n;j++){
                    swap(matrix[i][j],matrix[j][i]);
                }
            }
            for(int i=0;i<n;i++)
            {
                 reverse(matrix[i].begin(), matrix[i].end());
            }      
        }
    };
