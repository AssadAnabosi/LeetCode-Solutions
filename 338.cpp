// https://leetcode.com/problems/counting-bits/
// 338. Counting Bits

// O(n log n)
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> output = {0};
        output.resize(n+1);
        int tmp = 0;
        for(int i = 0; i < n+1; i++){
            tmp = i;
            while(tmp != 0){
                output[i] += (tmp  % 2);
                tmp /= 2;
            }
        }
        return output;
    }
};

// O(n) - using dynamic Prgoramming
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> output = {0};
        output.resize(n+1);
        int offset = 1;
        for(int i = 1; i < n+1; i++){
            if (offset * 2 == i)
                offset = i;
            output[i] = 1 + output[i - offset];
        }
        return output;
    }
};
