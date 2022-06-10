// https://leetcode.com/problems/remove-element/
// 27. Remove Element

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = nums.size();
        for(int i = 0; i < k; i++){
            while(nums[i] == val && i < k){
                nums[i] = nums[--k];
            }
        }
        return k;
    }
};
