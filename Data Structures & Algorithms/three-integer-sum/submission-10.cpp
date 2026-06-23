class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        int size = nums.size();
        
        // 1. Sort the array to easily manage duplicates and use pointers
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < size - 2; i++) {
            // Optimization: If the current number is positive, the sum can never reach 0
            if (nums[i] > 0) break;
            
            // Skip duplicates for the first element
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            
            int left = i + 1;
            int right = size - 1;
            
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                
                if (sum == 0) {
                    result.push_back({nums[i], nums[left], nums[right]});
                    
                    // Skip duplicates for the second and third elements
                    while (left < right && nums[left] == nums[left + 1]) left++;
                    while (left < right && nums[right] == nums[right - 1]) right--;
                    
                    // Move both pointers inward after finding a valid triplet
                    left++;
                    right--;
                } 
                else if (sum < 0) {
                    // Sum is too small, we need a larger number
                    left++;
                } 
                else {
                    // Sum is too large, we need a smaller number
                    right--;
                }
            }
        }
        
        return result;
    }
};