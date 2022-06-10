// https://leetcode.com/problems/remove-duplicates-from-sorted-array/
// 26. Remove Duplicates from Sorted Array

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = nums.size(), j = 0, lastEntry = -101;
        for(int i = 0; i < k; i++)
            if (nums[i] > lastEntry){
                nums[j++] = nums[i];
                lastEntry = nums[i];
            }
        return j;
    }
};8
