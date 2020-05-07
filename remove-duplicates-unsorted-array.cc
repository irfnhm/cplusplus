//Leetcode problem https://leetcode.com/problems/remove-duplicates-from-sorted-array/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int num{0};
        for(auto i = 0; i < nums.size(); i+-1){
            nums[num++] = nums[i++];
            while(i < nums.size() && i > 0 && nums[i] == nums[i - 1])
                i++;
        }
        return num;
    }
};
