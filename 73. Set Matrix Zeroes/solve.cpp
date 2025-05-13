#include <vector>
#include <iostream>
using namespace std;
//Brute - code does not work if there in nevgetive numbers in input matrix
void markRow(vector<vector<int>>& matrix,int n,int m,int i){
    for(int j=0;j<m;j++)
    {
         if(matrix[i][j]!=0)
         {
            matrix[i][j]=-1;
         }
    }
   }
    void markCol(vector<vector<int>>& matrix,int n,int m,int j){
    for(int i=0;i<n;i++)
    {
         if(matrix[i][j]!=0)
         {
            matrix[i][j]=-1;
         }
    }
   }

class Solution {
public:
void setZeroes(vector<vector<int>>& matrix) {
   int n = matrix.size();
   int m = matrix[0].size();

   for(int i=0;i<n;i++)
   {
     for(int j=0;j<m;j++)
     {
        if(matrix[i][j]==0)
        {
         markRow(matrix,n,m,i);
         markCol(matrix,n,m,j);
        }
     }
   }
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<m;j++)
    {
        if(matrix[i][j]==-1)
        matrix[i][j]=0;
    }
   }

}
};
// This code is a brute-force solution to the problem of setting matrix zeroes.
// It iterates through the matrix to find zeroes and marks the entire row and column as -1.
// Finally, it sets all -1 values to 0.
// The time complexity is O(n*m) for the first loop and O(n*m) for the second loop, resulting in O(n*m) overall.
// The space complexity is O(1) since we are modifying the matrix in place.


