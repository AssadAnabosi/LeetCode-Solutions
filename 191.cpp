// https://leetcode.com/problems/number-of-1-bits/
// 191. Number of 1 Bits

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ans = 0;
        for(int i = 0;i < 32; i++){
            if (n % 2 == 1)
                ans++;
            n = n >> 1;
        }
        return ans;
    }
};
