// https://leetcode.com/problems/reshape-the-matrix/
// 566. Reshape the Matrix

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int rows = mat.size(),  columns = mat[0].size();
        
        if (rows * columns != r * c) return mat;
        
        vector<vector<int>> solution;
        solution.resize(r);
        int rn = 0, cn = 0;
        for (int i = 0; i < rows; i++){
            for (int j = 0;j < columns; j++){
                solution[rn].push_back(mat[i][j]);
                if(cn+1 < c)
                    cn++;
                else{
                    cn=0;
                    rn++;
                }
            }
        }
        return solution;
    }
};
