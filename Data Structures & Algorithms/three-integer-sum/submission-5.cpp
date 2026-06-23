class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> result;
        int size=nums.size();
        for (int i = 0; i < size; i++) {
            int target = -nums[0];
            nums.erase(nums.begin());
            unordered_map<int,int>hashmap;
            for(int n : nums){
                if(hashmap.contains(n)){
                    vector<int>v = {-target,hashmap[n],n};
                    sort(v.begin(),v.end());
                    result.insert(v);
                }else{
                    hashmap [target - n ] = n;
                }
            }
        }
        vector<vector<int>> final_result(result.begin(), result.end());
        return final_result;
    }
};
