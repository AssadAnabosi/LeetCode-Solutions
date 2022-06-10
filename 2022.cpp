// https://leetcode.com/problems/convert-1d-array-into-2d-array/
// 2022. Convert 1D Array Into 2D Array

class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int lenght = original.size();
        vector<vector<int>> solution;
        if (lenght != m * n) return solution;
        solution.resize(m);
        int rN = 0, cN = 0;
        for(int i = 0;i < lenght; i++){
            solution[rN].push_back(original[i]);
            if (cN + 1 < n)
                cN++;
            else{
                cN = 0;
                rN++;
            }
        }
        return solution;
    }
};
