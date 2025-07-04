/* Find Transpose of a Matrix */
class Solution {
public:
    
    void transpose(vector<vector<int>>& mat, int n) {
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) { 
                int temp = mat[i][j];
                mat[i][j] = mat[j][i];
                mat[j][i] = temp;
            }
        }
    }
};