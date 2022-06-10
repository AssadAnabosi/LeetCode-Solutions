// https://leetcode.com/problems/reverse-bits/
// 190. Reverse Bits

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t output = 0;
        for(int i = 0;i < 32; i++)
            output |= ( (n >> i) & 1 ) << (31 - i);
        return output;
    }
};
