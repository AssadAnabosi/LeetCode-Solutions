// https://leetcode.com/problems/contains-duplicate/
// 217. Contains Duplicate

//  O(n log n)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i = 0;i < nums.size()-1; i++){
            if(nums[i] == nums[i+1])
                return true;
        }
        return false;
    }
};

// O(n) but with O(n) space as well
/*
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        hashmap set<int>
        for(int i = 0;i < nums.size()-1; i++){
            if(set.find(nums[i])
                return true;
            set.add(nums[i]);
        }
        return false;
    }
};

*/
