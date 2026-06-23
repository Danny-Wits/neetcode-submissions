class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        set<int> uset;
        for (const int& num : nums) {
            uset.insert(num);
        }
        vector<int> vec;
        int m = 1;

        for (const int& num : nums) {
            if (uset.find(num - 1) != uset.end()) {
                int count = 1;
                int start = num ;
                while (uset.find(start++) != uset.end()) count++;
                m = max(m, count);
            }
        }

        return m;
    }
};
