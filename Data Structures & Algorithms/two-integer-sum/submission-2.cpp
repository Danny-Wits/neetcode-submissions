class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashmap;
        for (int i = 0; i < nums.size(); i++) {
            int  n = nums[i];
            if (hashmap.contains(n)) {
                vector<int> v = {hashmap[n], i};
                return v;
            } else {
                hashmap[target - n] = i;
            }
        }
    }
};
