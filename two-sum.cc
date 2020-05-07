//Leetcode two sum problem

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        vector<int> indices;
        for (int i = 0; i < nums.size(); ++i) {
            if (map.find(target - nums.at(i)) == map.end()) {
                map[nums.at(i)] = i;
            }
            else {
                indices.push_back(map[target - nums.at(i)]);
                indices.push_back(i);
            }
        }
        return indices;
    }
};
