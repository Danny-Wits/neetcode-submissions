class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size(), 0);
        int zeroIndex = -1;
        int product=1;

        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            if (num == 0) {
                if (zeroIndex == -1) {
                    zeroIndex = i;
                } else {
                    return result;
                }
            } else {
                product *= num;
            }
        }
        cout<<product;
        if (zeroIndex == -1) {
            for (int i = 0; i < nums.size(); i++) {
                result[i] = product / nums[i];
            }
        } else {
            result[zeroIndex] = product;
        }
        return result;
    }
};
