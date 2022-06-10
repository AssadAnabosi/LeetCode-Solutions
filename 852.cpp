// https://leetcode.com/problems/peak-index-in-a-mountain-array/
// 852. Peak Index in a Mountain Array

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int left = 0;
        int right = arr.size()-1;
        int middle;
        while (left < right){
            middle = left + (right - left) / 2; 
            if (arr[middle] < arr[middle + 1])
                left = middle + 1;
            else
                right = middle;
        }
        return left;
    }
};
