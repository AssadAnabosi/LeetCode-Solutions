// https://leetcode.com/problems/find-peak-element/
// 162. Find Peak Element

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int left = 0, right = nums.size()-1, middle;
        while (left < right){
            middle = left + (right - left) / 2;
            if (nums[middle] < nums[middle + 1])
                left = middle + 1;
            else
                right = middle;
        }
        return left;
    }
};
