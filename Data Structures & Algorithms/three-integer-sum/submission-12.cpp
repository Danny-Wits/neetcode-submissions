class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> result;
        int size = nums.size();
        for (int i = 0; i < size; i++) {
            int target = -nums[i];
            unordered_map<int, int> hashmap;
            for (int j = 0; j < size; j++) {
                if (i == j) continue;
                int n = nums[j];
                if (hashmap.contains(n)) {
                    int a = -target, b = hashmap[n], c = n;

                    if (a > b) swap(a, b);
                    if (a > c) swap(a, c);
                    if (b > c) swap(b, c);

                    vector<int> v = {a, b, c};
                    result.insert(v);

                } else {
                    hashmap[target - n] = n;
                }
            }
        }
        vector<vector<int>> final_result(result.begin(), result.end());
        return final_result;
    }
};
