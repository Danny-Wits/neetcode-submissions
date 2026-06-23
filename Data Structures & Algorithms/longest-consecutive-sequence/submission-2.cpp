class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0 ;
        set<int> uset;
        for (const int& num : nums) {
            uset.insert(num);
        }
        vector<int> vec;
        for (const int& num : nums) {
            if (uset.find(num - 1) != uset.end()) {
                vec.push_back(num);
            }
        }
        int m =1;
        for (int num : vec) {
            int count = 1;
            while (uset.find(num++) != uset.end()) count++;
            m = max(m, count);
        }

        return m;
    }
};
