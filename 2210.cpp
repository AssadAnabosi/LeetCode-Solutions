// https://leetcode.com/problems/count-hills-and-valleys-in-an-array/
// 2210. Count Hills and Valleys in an Array


class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int current, leftN, rightN, count = 0;
        for(int i = 1; i < nums.size()-1; i++){
            int r = i+1, l = i-1;
            cout << i << "\t" << l << "\t" << r << endl;
            current = nums[i];
            leftN = nums[l];
            rightN = nums[r];
            while(current == leftN && l-1 >= 0){
                leftN = nums[--l];
            }
            while(current == rightN && r+1 < nums.size()){
                rightN = nums[++r];
            }
            if (current > leftN && current > rightN){
                if (!(current == nums[i+1]))    //  not part of next hill
                    count++;
                continue;
            }
            if (current < leftN && current < rightN){
                if(!(current == nums[i-1])) //  not part of previous valley
                    count++;
                continue;
            }
        }
        return count;
    }
};
